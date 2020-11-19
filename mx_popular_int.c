#include "libmx.h"

int mx_popular_int(const int *arr, int size){
	int arr1[size], arr2[size], n = 0, j;
	for (int i = 0; i < size; i++){
		for (j = 0; j < n; j++)
			if (arr1[j] == arr[i]){
				(arr2[j])++;
				break;
			}
		if (j == n){
			arr1[n] = arr[i];
			arr2[n++] = 1;
		}
	}
	j = 0;
	for (int i = 1; i<n; i++)
		j = (arr2[j] < arr2[i]) ? i : j;
	return arr1[j];
}
