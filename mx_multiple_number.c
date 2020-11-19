#include "libmx.h"

bool mx_multiple_number(int n, int mult){
	return (((mult % n) == 0) ? true : false);
}
