#include "libmx.h"

void print(char *c, int d[]){
  for (int i = 0;c[i];i++)
    for (int j = 0;j<d[i];j++)
      mx_printchar(c[i]);
}

void mx_pyramid(int n){
    if((n < 2) || (n%2)==1)
        return;
    print(" /\\\n", (int []){n-1, 1, 1, 1});
    for(int i = 0; i < (n/2-1); i++)
	print(" / \\ \\\n", (int []){n-2-i, 1, (2*(i+2)-3), 1, i+1, 1, 1});
    for(int i = (n/2-1); i < (n-2); i++)
	print(" / \\ |\n", (int []){n-2-i, 1, 2*(i+2)-3, 1, n-2-i, 1, 1});
    print("/_\\|\n", (int []){1, 2*n-3, 1, 1, 1});
}
