#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    char    *destination;
    char    *source;

    if (!src && !dest)
        return (NULL);
    i = 0;
    destination = (char *) dest;
    source = (char *) src;
    while (i < n)
    {
        destination[i] = source[i];
        i++;
    }
    return (dest);
}