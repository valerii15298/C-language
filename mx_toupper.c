#include "libmx.h"

int mx_toupper(int c){
	return ((96 < c && c < 123) ? (c - 32) : (c));
}
