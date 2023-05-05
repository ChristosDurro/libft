#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    char    *destination;
    char    *source;

    if (!src && !dest)
        return (NULL);
    if (src > dest)
        dest = ft_memcpy(dest, src, n);
    else
    {
        destination = (char *) dest;
        source = (char *) src;
        while (n >= 0)
        {
            destination[n] = source[n];
            n--;
        }
    }
    return (dest);
}