#include "libmx.h"

bool mx_isupper(int c){
	return ((64 < c && c < 91) ? true : false);
}
