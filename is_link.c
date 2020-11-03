#include "lem_in.h"

int			is_link(char *line)
{
	int		i;
	char	*temp;
	char	**rooms;

	i = 0;
	temp = line;
	rooms = NULL;
	while (line[i] != '\0')
	{
		if (line[i] == ' ' || line[i] == '\n' || line[i] == '\v' || line[i] == '\t' || line[i] == '\f' || line[i] == '\r')
			return 0;
		i++;
	}
	if (ft_strchr(line, '-') == NULL)
		display_error();
	i = 0;
	
	return 1;
}