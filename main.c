#include "lem_in.h"

int         calc_starts(t_links *links, char *start_name)
{
    int     i;

    i = 0;
    while (links != NULL)
    {
        if (ft_strequ(links->name1, start_name) || ft_strequ(links->name2, start_name))
            i++;
        links = links->next;
    }
    return (i);
}

char        *start_or_end_name(t_rooms *rooms, char *searched)
{
    while (rooms != NULL)
    {
        if (ft_strequ(rooms->pos, searched))
            return (ft_strdup(rooms->name));
        rooms = rooms->next;
    }
    display_error();
    return (NULL);
}

void        make_map2(int *ants, t_map **map, t_rooms **rooms, t_links **links)
{
    char    *start_name;
    char    *end_name;
    int     num_of_start;
    
    start_name = start_or_end_name(*rooms, "start");
    end_name = start_or_end_name(*rooms, "end");
    num_of_start = calc_starts(*links, start_name);
    connect_links(links, start_name, end_name, num_of_start);
    free(start_name);
    free(end_name);
}


void		make_map(int *ants, t_map **map, t_rooms **rooms, t_links **links)
{
	char	*line;
	int		status;

	status = 0;
	while (get_next_line(0, &line) == 1)
	{
        if (status == 0 && add_ants(ants, line))
            status = 1;
        else if (status == 1 && ft_strequ(line, "##start"))
            status = 11;
        else if (status == 1 && ft_strequ(line, "##end"))
            status = 12;
        else if (status > 0 && line[0] != '#' && is_link(line))
        {
            status = 2;
            ft_putendl(line);
            add_list_links(links, line);
        }
        else if ((status == 11 || status == 12) && line[0] != '#' && is_room(line))
            add_room(rooms, line, &status);
		else if (line[0] != '#' && status == 1 && is_room(line))
			add_room(rooms, line, &status);
		else
			if (line[0] != '#')
				display_error();
	}
	free(line);
    make_map2(ants, map, rooms, links);
}

int				main(void)
{
	int			ants;
	t_map		*map;
	t_rooms     *rooms;
    t_links     *links;
	
	ants = 0;
	map = NULL;
    rooms = NULL;
    links = NULL;
	make_map(&ants, &map, &rooms, &links);
	return (0);
}
