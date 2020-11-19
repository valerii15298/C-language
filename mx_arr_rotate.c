#include "libmx.h"

void mx_arr_rotate(int *arr, int size, int shift) {
	shift %= size;
	int t;
	if (shift < 0)
		shift = size + shift;
	for(int i = 0; i++<shift; arr[0] = t){
		t = arr[size - 1];
		for (int j = size;--j > 0;arr[j] = arr[j - 1]);
	}
}
