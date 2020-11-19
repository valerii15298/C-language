#include "libmx.h"

int mx_atoi(const char *str){
	int i = -1, h = 1, rez = 0;
	while(mx_isspace(str[++i]));
	if (mx_isdigit(str[i]) && i>0)
		return 0;
	else if (str[i] == '-'){
		h = -1;
		i++;
	} else if (str[i] == '+')
		i++;
	while(mx_isdigit(str[i]))
		rez = 10 * rez + h*(int)(str[i++] - '0');
	if (str[i] != '\0')
		return 0;
	return rez;
}
