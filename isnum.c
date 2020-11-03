#include "lem_in.h"

int         isnum(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_isdigit(str[i]) == 0)
            return (0);
        i++;
    }
    if (atoi_long(str) >= 2147483647)
        return (0);
    return (1);
}