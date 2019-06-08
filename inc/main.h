#ifndef MAIN_H
# define MAIN_H

# include "ft_ls.h"
# include "ft_printf.h"
# include <sys/types.h> 
# include <sys/stat.h> 

# define VALID_OPTIONS "Ralrt"

t_dir	ft_gen_tdir(char *path, char *name);
t_bool	ft_fill_fstat(t_dir *tmp, char *path, char *name);
void	ft_del_tdir(t_dir *dir);
void	ft_insert_dir(t_list **lst, t_dir dir, const unsigned char options);
void	ft_display(t_list *lst, unsigned char options, t_bool dirs);
void	ft_list_and_rec(t_list *lst_dir, unsigned char options, t_bool hdr);

#endif