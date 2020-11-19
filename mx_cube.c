#include <unistd.h>
#include <stdlib.h>

void print(char *c, int d[]){
  for (int i = 0; c[i]; i++)
    for (int j = 0; j < d[i]; j++)
      write(1, c[i], 1);
}

void mx_cube(int n){
    if (n < 2)
	return;
    print(" +-+\n", (int []){((n / 2) + 1), 1, 2 * n, 1, 1});
    for (int i = n / 2; i > 0; i--)
	print(" / / |\n", (int []){i, 1, 2 * n, 1, n / 2 - i, 1, 1});
    print("+-+ |\n", (int []){1, 2 * n, 1, n / 2, 1, 1});
    for(int i = 0; i < (n - 1) / 2; i++)
	print("| | |\n", (int []){1, 2 * n, 1, n / 2, 1, 1});
    print("| | +\n", (int []){1, 2 * n, 1, n / 2, 1, 1});
    for(int i = 0; i < n / 2; i++)
	print("| | /\n", (int []){1, 2 * n, 1, (n / 2 - i - 1), 1, 1});
    print("+-+\n", (int []){1, 2 * n, 1, 1});
}

int main(int argc, char *argv[]){
	mx_cube(atoi(argv[argc - 1]));
	return 0;
}
