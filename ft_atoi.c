#include"libft.h"

int		ft_atoi(const char *nptr)
{
    int sign;
    int result;
    int i;

    i = 0;
    sign = 1;
    result = 0;
    while (nptr[i] == 32)
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            sign = -1;
        i++;
    }
    while (ft_isdigit(nptr[i]))
    {
        result = result * 10 + nptr[i] - '0';
        i++;
    }
    return (result * sign);
}