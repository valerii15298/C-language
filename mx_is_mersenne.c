#include "libmx.h"

bool mx_is_mersenne(int n)
{
	if (!mx_is_prime(n))
		return false;
	int t;
	for (t = 2; t < n + 1;)
		t = t * 2;
	return t == (n + 1);
}
