#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    if (dest > src )
    {
        while (n > 0)
            {
                n--;
                ((char *)dest)[n] = ((char *)src)[n];
            }
    }
    else
        ft_memcpy(dest, src, n);
    return (dest);
}