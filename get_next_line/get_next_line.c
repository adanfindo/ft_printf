/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:01:22 by afindo            #+#    #+#             */
/*   Updated: 2022/01/21 12:20:10 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
/*
prende fd come parametro e restituisce la riga successiva fino a \n o \0
*/

	static char		*b_read;
	char			*buffer;
	char			*line;
	ssize_t			n;

	b_read = NULL;
	if (fd < 0 || BUFFER_SIZE < 1) //controllo validità di fd e di BUFFER_SIZE
		return (NULL);
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char)); //alloco memoria per la dimensione di BUFFER_SIZE
	if (!buffer) //Controllo validità della malloc
		return (NULL);
	if (read(fd, buffer, BUFFER_SIZE) < 0) //verifica se read sia andata a buon fine
	{
		free(buffer);
		return (NULL);
	}
	if (!b_read) //inserisce un valore vuoto dentro b_read
		b_read = ft_strdup("");
	n = read_file(fd, &buffer, &buff_r, &line); 
	if (n == 0 && !line) //controllo validità read_file e line
		return (NULL);
	return (line);
}

ssize_t	read_file(int fd, char **buffer /*passato a read*/, char **b_read /*la statica accumulata da gnl*/, char **line/*il puntatore alla linea estratta*/)

{
/*
controlla che ci sia un \n in buffer a partire dalla variabile statica b_read
se trova un \n esegue buffer in gnl
altrimenti legge il file finchè non arriva a \n o \0
*/

	char	*tmp;
	ssize_t	n;

	n = 1;
	while (!ft_strchr(*b_read, '\n') && n) //ricerca di \n e sposta il puntatore su \n in b_read
	{
	//leggo fd in blocchi di BUFFER_SIZE e lo inserisco in buffer assegnando tutto a n
		n = read(fd, *buffer, BUFFER_SIZE); 
		(*buffer)[n] = '\0';
		tmp = *b_read;
		*b_read = ft_strjoin(tmp, *buffer); //unisce tmp e buffer per creare un unica stringa in b_read
		free(temp);
	}
	free(*buffer);
	*buffer = NULL;
	*b_read = get_line(b_read, line);
	if (**line == '\0')
	{
		free(*line);
		*line = NULL;
	}
	return (n);
}

char	*get_line(char **b_read, char **line)
{
/*
estrae la linea che finisce \n e \0 oppure \0 se fine file dal buffer statico
prende in ingresso la variabile statica da gnl e il puntatore alla linea estratta
ritorna il buffer aggiornato con quello che rimane dall'originale meno la linea estratta
nbuff
*/

	size_t	i;
	char	*nbuff;

	i = 0;
	nbuff = NULL;
	while ((*(*b_read + i) != '\n') && (*(*b_read + i) != '\0'))
		i++;
	if (*(*b_read + i) == '\n')
	{
		i++;
		*line = ft_substr(*b_read, 0, i);
		new_buff = ft_strdup(*b_read + i);
	}
	else
		*line = ft_strdup(*b_read);
	free(*b_read);
	*b_read = NULL;
	return (nbuff);
}
