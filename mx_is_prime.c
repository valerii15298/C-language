#include "libmx.h"

bool mx_is_prime(int num){
	if (num < 2)
		return false;
	else
        	for (int i = 2; i <= num / 2; i++)
        		if (num % i == 0)
        			return false;
        return true;
}
