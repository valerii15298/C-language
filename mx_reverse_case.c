#include "libmx.h"

void mx_reverse_case(char *s){
	for (int i = 0; s[i]; i++){
		if (mx_islower(s[i]))
			s[i] = mx_toupper(s[i]);
		else if (mx_isupper(s[i]))
			s[i] = mx_tolower(s[i]);
	}
}
