#include"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    if (*little == '\0')
        return ((char *) big);
    i = 0;
    while (*(big + i) && i < len)
    {
        j = 0;
        while (*(big + i + j) && *(big + i + j) == *(little + j))
        {
            if (*(little + j + 1) == '\0')
                return ((char *) (big + i));
            j++;
        }
        i++;
    }
    return (0);
}