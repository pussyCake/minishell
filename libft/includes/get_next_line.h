
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE

#  define BUFFER_SIZE 4096

# endif

int		tmp_lstadd_back(t_list **lst, void *data);
size_t	get_list_len(t_list *list);

#endif
