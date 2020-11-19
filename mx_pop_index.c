#include "libmx.h"

void mx_pop_index(t_list **list, int index){
    if (list == NULL)
        return;
    
    if (*list == NULL)
        return;

    if(index <= 0){
        mx_pop_front(list);
        return;
    }
    t_list *temp = *list;
    for(int i = 1; (i < index) && (temp -> next); i++)
        temp = temp -> next;
    t_list *to_free = temp -> next;
    temp -> next = ((temp -> next) -> next);
    free(to_free);
}
