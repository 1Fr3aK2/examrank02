#include "ft_list.h"

int     ft_list_size(t_list *begin_list)
{
    int i = 1;
    while(begin_list->next != NULL)
    {
        begin_list = begin_list -> next;
        i++;
    }
    return(i);
}