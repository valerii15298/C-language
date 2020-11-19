#include "libmx.h"

int mx_sum_digits(int num){
	num = (num < 0) ? -num : num;
	int sum = 0;
	for (num = (num < 0) ? -num : num; num > 0;num /= 10)
		sum += num % 10;
	return sum;
}
