#include <unistd.h>
#include <stdlib.h>
#include "list.h"

t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *temp;
    int content;
    if(!lst)
        return (NULL);
    temp = lst;
    while(lst->next != NULL)
    {
        if((*cmp)(lst->data, lst->next->data) == 0)
        {
            content = lst->data;
            lst->data = lst->next->data;
            lst->next->data = content;
            lst = temp;
        }
        else
            lst = lst->next;
    }
    return (temp);
}