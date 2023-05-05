#include"libft.h"

char	*ft_strdup(const char *s)
{
    char    *target;
    int     len;

    len = ft_strlen(s);
    target = malloc((len + 1) * sizeof(char));
    if (target == NULL)
        return (0);
    target[len] = '\0';
    len--;
    while (len >= 0)
    {
        target[len] = s[len];
        len--;
    }
    return (target);
}