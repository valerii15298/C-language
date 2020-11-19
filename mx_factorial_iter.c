#include "libmx.h"

int mx_factorial_iter(int n){
	if(n >= 0 && n <= 12){
		int rez = 1;
		for(int i = 2; i <= n; rez *= (i++));
		return rez;
	}
    return 0;
}
