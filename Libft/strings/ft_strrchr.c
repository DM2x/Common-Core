#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int len;

    len = ft_strlen(s);
    while (len != 0 && (char)c != s[len])
        len--;
    if (s[len] == (char)c)
        return ((char *)s[len]);
    return (NULL);
}