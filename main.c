#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i = 0, m;
	
	while (i < 3)
	{
		m = i * 1609;
		printf(" %d mile is %d meter.\n", i, m);
		i++;
	}
	
	return 0;
}
