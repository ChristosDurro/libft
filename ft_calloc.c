#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
    size_t  i;
    char    *dest;
    
    dest = malloc(size * nmemb);
    if (!dest)
        return (NULL);
    i = 0;
    while (i < size * nmemb)
    {
        dest[i] = 0;
        i++;
    }
    return (dest);
}