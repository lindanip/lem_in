#include "lem_in.h"

t_rooms		*new_room1(char *pos, char *name)
{
	t_rooms	*room;

	if (!(room = (t_rooms *)malloc(sizeof(t_rooms) * 1)))
		return (NULL);
    room->pos = pos;
	room->name = name;
	room->next = NULL;
	room->prev = NULL;
	return (room);
}

void		add_tolist(t_rooms **rooms, t_rooms **new)
{
	if (rooms != NULL || new != NULL)
	{
		(*new)->next = *rooms;
		(*rooms)->prev = *new;
		*rooms = *new;
	}
}

void         check_ends(t_rooms *rooms, int status)
{
    t_rooms *temp;

    temp = rooms;
    if (rooms == NULL)
        return ;
    while (temp != NULL)
    {
        if (status == 11 && ft_strequ(temp->pos, "start"))
			display_error();
        else if (status == 12 && ft_strequ(temp->pos, "end"))
			display_error();
        temp = temp->next;
    }
}

void		check_dbl1(t_rooms *rooms, char *name)
{
    t_rooms	*temp;

    temp = rooms;
    if (rooms == NULL)
        return ;
    while (temp != NULL)
    {
        if (ft_strequ(temp->name, name))
			display_error();
        temp = temp->next;
    }
}

void		add_room(t_rooms **rooms, char *line, int *status)
{
	char	**name;
	t_rooms	*temp;

	temp = NULL;
	name = ft_strsplit(line, ' ');
	if (*status == 11 || *status == 12)
		check_ends(*rooms, *status);
	check_dbl1(*rooms, name[0]);
	if (*status == 11)
	{
		temp = new_room1("start", name[0]);
		ft_putendl("##start");
	}
	else if (*status == 12)
	{
		temp = new_room1("end", name[0]);
		ft_putendl("##end");
	}
	else
		temp = new_room1("mid", name[0]);

	if (*rooms == NULL)
		*rooms = temp;
	else
		add_tolist(rooms, &temp);
	ft_putendl(name[0]);
	free(name);
	*status = 1;
}

