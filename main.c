#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	printf("input a number : ");
	scanf("%d", &i);
	
	if(i > 0)
		printf("%d is positive number", i);
	else
		printf("%d is negative number", i);
	
	return 0;
}
