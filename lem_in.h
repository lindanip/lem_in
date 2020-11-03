#ifndef LEM_IN_H
# define LEM_IN_H
# include "libft/libft.h"

typedef struct		s_map
{
	char			*pos;
	char			*name;
	char			state;
	struct s_map	*next;
	struct s_map	**links;
} 					t_map;

typedef struct		s_rooms
{
	char			*pos;
	char			*name;
	struct s_rooms	*next;
	struct s_rooms	*prev;
}					t_rooms;

typedef struct		s_links 
{
	char			*link;
	char			*name1;
	char			*name2;
	struct s_links	*next;
	struct s_links	*prev;
}					t_links;


int					add_ants(int *ants, char *line);
void				display_error();
long long			atoi_long(const char *str);
int					isnum(char *str);
int					is_room(char *line);
void				add_room(t_rooms **rooms, char *line, int *status);
void				print_rooms(t_rooms *rooms);
int					is_link(char *line);
void				add_list_links(t_links **links, char *line);
void				print_links(t_links *link);
void				connect_links(t_links **links, char *start_name, char *end_name, int num_of_start);
#endif
