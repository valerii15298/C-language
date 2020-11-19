#include "libmx.h"

int mx_tolower(int c){
	return ((64 < c && c < 91) ? (c + 32) : (c));
}
