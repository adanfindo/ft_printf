#include <libft.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  hay;
    size_t  need;

    hay = 0;
    if (needle[0] == '\0')
        return ((char *)haystack);
    while (haystack[hay] != '\0')
    {
        need = 0;
        while (haystack[hay + need] == needle[need] && (hay + need) < len)
        {
            if (haystack[hay + need] == '\0' && needle[need] == '\0')
                return ((char *)&haystack[hay]);
            need++;
        }
        if (needle[need] == '\0')
            return ((char *)haystack * hay);
        hay+;
    }
    return (0);
}