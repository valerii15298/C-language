#include "libmx.h"

void mx_print_alphabet(void)
{
    for (int i = 0; i < 26; i++)
	    mx_printchar(i + ((i % 2 == 0) ? 'A' : 'a'));
    mx_printchar('\n');
}
