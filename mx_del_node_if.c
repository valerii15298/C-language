#include "libmx.h"

void mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b))
{
    t_list *temp, *ext = *list;
    while(ext != NULL){
        temp = ext -> next;
        if (cmp((ext -> next) -> data, del_data)){
            t_list *to_free = ext;

        }
        ext = temp;
    }
    if(*list == NULL)
        return;
    t_list *temp = *list;
    t_list *prev = temp;
    while(temp -> data != NULL)
    {
        if(temp -> data == del_data)
        {
            prev -> next = temp -> next;
            free(temp);
            return;
        }
        prev = temp;
        temp = temp -> next;
    }
}
