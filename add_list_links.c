#include "lem_in.h"

t_links		*new_link1(char *line, char *name1, char *name2)
{
	t_links	*link;

	if (!(link = (t_links *)malloc(sizeof(t_links) * 1)))
		return (NULL);
    link->link = line;
	link->name1 = name1;
    link->name2 = name2;
	link->next = NULL;
	link->prev = NULL;
	return (link);
}

void		add_link_tolist(t_links **links, t_links **new)
{
	if (links != NULL || new != NULL)
	{
		(*new)->next = *links;
		(*links)->prev = *new;
		*links = *new;
	}
}

void		check_dbl_link(t_links *links, char *name)
{
    t_links	*temp;

    temp = links;
    if (links == NULL)
        return ;
    while (temp != NULL)
    {
        if (ft_strequ(temp->link, name))
        {
			ft_putendl("found matching link");
			exit(0);
		}
        temp = temp->next;
    }
}

void		add_list_links(t_links **links, char *line)
{
	char	**name;
	t_links	*temp;

	temp = NULL;
    check_dbl_link(*links, line);
	name = ft_strsplit(line, '-');
    temp = new_link1(line, name[0], name[1]);
	if (*links == NULL)
		*links = temp;
	else
		add_link_tolist(links, &temp);
	free(name);
}

