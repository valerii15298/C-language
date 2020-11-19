#include "libmx.h"

int mx_selection_sort(char **arr, int size){
	int mi, count = 0;
	char* c;
	for (int i = 0; i < size - 1; i++){
		mi = i;
		for (int j = i + 1; j < size; j++){
			int a = mx_strlen(arr[j]), b = mx_strlen(arr[mi]);
			if (a < b || (a == b && (mx_strcmp(arr[j], arr[mi]) < 0)))
				mi = j;
		} 
		if (mi != i){
			c = arr[i];
			arr[i] = arr[mi];
			arr[mi] = c;
			count++;
		}
	}
	return count;
}
