#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (*src && i < (size - 1))
		{
			*dst++ = *src++;
			i++;
		}
		*dst = '\0';
	}
	return (src_len);
}