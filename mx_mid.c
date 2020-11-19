#include "libmx.h"

int mx_mid(int a, int b, int c){
	return ((a >= b && a <= c) || (a <= b && a >= c)) ? 
		(a) : (((b >= a && b <= c) || (b <= a && b >= c)) ? (b) : (c));
}
