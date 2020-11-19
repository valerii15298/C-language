#include "libmx.h"

void mx_push_index(t_list **list, void *data, int index){
    if (list == NULL)
        return;
    if(index <= 0 || (*list) == NULL){
        mx_push_front(list, data);
        return;
    }
    t_list *temp = *list;
    for(int i = 1; (i < index) && (temp -> next); i++)
        temp = temp -> next;
    t_list *ins_node = mx_create_node(data);
    ins_node -> next = (temp -> next);
    temp -> next = ins_node;
}
