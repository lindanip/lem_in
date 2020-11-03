#include "lem_in.h"

int			is_room(char *line)
{
	char	**name;
	int		i;
	int		x;

	i = 0;
	x = 0;
	if (ft_strrows_c(line, ' ') != 3){
		display_error();
	}
	while (line[i] != '\0')
	{
		if (line[i] == '\n' || line[i] == '\v' || line[i] == '\t' || line[i] == '\f' || line[i] == '\r')
			display_error();
		else if (line[i] == ' ')
			x++;
		i++;
	}
	if (x < 2 || x > 2)
		display_error();
	name = ft_strsplit(line, ' ');
	if (name[0][0] == '#' || name[0][0] == 'L')
		display_error();
	if (isnum(name[1]) == 0 || isnum(name[2]) == 0)
		display_error();
	return (1);
	free(name);
}
