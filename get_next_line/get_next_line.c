
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char		*gnl_buff;
	char			*buff;
	char			*line;
	ssize_t			n;

	gnl_buff = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	if (read(fd, buff, 0) < 0)
	{
		free(buff);
		return (NULL);
	}
	if (!gnl_buff)
		gnl_buff = ft_strdup("");
	n = gnl_read(fd, &buff, &gnl_buff, &line);
	if (n == 0 && !line)
		return (NULL);
	return (line);
}

ssize_t	gnl_read(int fd, char **buff, char **gnl_buff, char **line)
{
	char	*tmp;
	ssize_t	n;

	n = 1;
	while (!ft_strchr(*gnl_buff, '\n') && n)
	{
		n = read(fd, *buff, BUFFER_SIZE);
		(*buff)[n] = '\0';
		tmp = *gnl_buff;
		*gnl_buff = ft_strjoin(tmp, *buff);
		free(tmp);
	}
	free(*buff);
	*buff = NULL;
	*gnl_buff = gnl_get(gnl_buff, line);
	if (**line == '\0')
	{
		free(*line);
		*line = NULL;
	}
	return (n);
}

char	*gnl_get(char **gnl_buff, char **line)
{
	size_t	i;
	char	*nbuff;

	i = 0;
	nbuff = NULL;
	while ((*(*gnl_buff + i) != '\n') && (*(*gnl_buff+ i) != '\0'))
		i++;
	if (*(*gnl_buff + i) == '\n')
	{
		i++;
		*line = ft_substr(*gnl_buff, 0, i);
		nbuff = ft_strdup(*gnl_buff + i);
	}
	else
		*line = ft_strdup(*gnl_buff);
	free(*gnl_buff);
	*gnl_buff = NULL;
	return (nbuff);
}
