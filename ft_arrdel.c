#include "libft.h"
#include <stdlib.h>

void    ft_arrdel(char **arr, size_t len)
{
    size_t  i;
    
    i = 0;
    while (len--)
        free(arr[i++]);
    free(arr);
}
