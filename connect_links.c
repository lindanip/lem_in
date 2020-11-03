#include "lem_in.h"

t_map       *fill_array_index(t_map **map_array, t_links **links, char *start_name, char *end_name)
{
    t_links *temp;

    temp = *links;
    while (temp != NULL)
    {
        if ((!ft_strequ(temp->link, "found")) && ft_strequ(temp->name1, start_name))
        {

            ft_putendl("found a first in num 1");
            (*links)->link = "found";
        }
        else if ((!ft_strequ(temp->link, "found")) && ft_strequ(temp->name2, start_name))
        {
            ft_putendl("found a first in num 2");
            (*links)->link = "found";
        }
        temp = temp->next;
    }
    exit(0);
}

void        connect_links(t_links **links, char *start_name, char *end_name, int num_of_start)
{
    t_map   *map_array[num_of_start + 1];
    int     i;

    map_array[num_of_start] = NULL;
    i = 0;
    while (num_of_start > 0)
    {
        map_array[i] = fill_array_index(map_array, links, start_name, end_name);
        num_of_start--;
    }
}