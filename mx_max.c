#include "libmx.h"

int mx_max(int a, int b, int c){
	return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}
