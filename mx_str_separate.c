#include "libmx.h"

void mx_str_separate(const char *str, char delim){
	int i;
	for (i = 0; str[i]; i++)
		if (str[i] == delim)
			for (mx_printchar('\n'); str[i + 1] == delim; i++);
		else
			mx_printchar(str[i]);
	mx_printchar('\n');
}
