#include "libmx.h"

bool mx_is_narcissistic(int num){
	int sum = (num < 0) ? -num : num;
	int k = 0;
	num = sum;
	int t = sum;
	for (; sum > 0; sum /= 10)
		k = k + 1;
	sum = 0;
	for (; num > 0; num /= 10)
		sum = sum + mx_pow(num % 10, k);
	return (sum == t);
}
