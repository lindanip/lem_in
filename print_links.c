#include "lem_in.h"

void        print_links(t_links *link)
{
    while (link != NULL)
    {
        ft_putendl("**********");
        ft_putstr("the the - ");
        ft_putendl(link->link);
        ft_putstr("the name1 - ");
        ft_putendl(link->name1);
        ft_putstr("the name2 - ");
        ft_putendl(link->name2);
        ft_putendl("*********");
        link = link->next;
    }
}