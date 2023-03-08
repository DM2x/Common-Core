#include "libft.h"

char    *ft_strdup(const char *s)
{
    int i;
    char    *ptr;

    i = 0;
    ptr = (char *) malloc(ft_Strlen(s) +1);
    if (!ptr)
        return (NULL);
    while(s[i])
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = NULL;
    return (ptr);
    

}