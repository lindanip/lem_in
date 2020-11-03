#include "lem_in.h"

int			is_ant(char *line)
{
	if (isnum(line) && (atoi_long(line) < 2147483647))
		return (1);
	return (0);
}

int         add_ants(int *ants, char *line)
{
    if (is_ant(line) == 0)
        return (0);
    *ants = ft_atoi(line);
    ft_putnbr(*ants);
    ft_putchar('\n');
    return (1);  
}