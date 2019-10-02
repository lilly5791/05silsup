#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	printf("input a number : "); //05week 1
	scanf("%d", &i);
	
	if(i > 0)
		printf("%d is positive number", i);
	else
		printf("%d is negative number", i);
		
	return 0;
}

int main(int argc, char *argv[]) {
	
	int i;
	
	printf("input a number : "); // 05week 2
	scanf("%d", &i);
	
	if (i < 0)
		i = -i;
	
	printf("Absolute number is %d", i);
	
	return 0;
}
	

int main(int argc, char *argv[]) {
	
	int i;
	
	printf("input a number : "); // 05week 3
	scanf("%d", &i);
	
	if(i > 0)
		printf("%d is positive number", i);
	else if (i < 0)
		printf("%d is negative number", i);
	else
		printf("%d is zero", i);
	
	return 0;
}
