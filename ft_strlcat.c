#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  dst_size;
    size_t  src_size;
    size_t  result;

    dst_size = ft_strlen(dst);
    src_size = ft_strlen(src);
    result = src_size;
    if (size <= dst_size)
        result += size;
    else
        result += dst_size;
    src_size = 0;
    while (src[src_size] && dst_size + 1 < size)
    {
        dst[dst_size] = src[src_size];
        dst_size++;
        src_size++;
    }
    dst[dst_size] = '\0';
    return (result);
}