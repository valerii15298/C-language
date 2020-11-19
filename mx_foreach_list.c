#include "libmx.h"

void mx_foreach_list(t_list *list, void (*f)(t_list *node)){
    t_list *temp;
    while(list){
        temp = list -> next;
        f(list);
        list = temp;
    }
}

