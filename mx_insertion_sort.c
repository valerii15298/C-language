#include "libmx.h"

int mx_insertion_sort(char **arr, int size){
	char *c, count = 0;
	for (int i = 1; i < size; i++)
		for (int j = i; j > 0; j--)
			while (mx_strlen(arr[j]) < mx_strlen(arr[j - 1])){
				c = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = c;
				count++;
			}
	return count;
}
