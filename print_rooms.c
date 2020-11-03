#include "lem_in.h"

void		print_rooms(t_rooms *rooms)
{
    while (rooms != NULL)
    {
        ft_putendl("--------");
        ft_putstr("the pos - ");
        ft_putendl(rooms->pos);
        ft_putstr("the name - ");
        ft_putendl(rooms->name);
        ft_putendl("--------");
        rooms = rooms->next;
    }
}