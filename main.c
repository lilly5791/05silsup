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


int main(int argc, char *argv[]) {
	
	int i = 0, m; // 05 silsup4
	
	while (i < 3)
	{
		m = i * 1609;
		printf(" %d mile is %d meter.\n", i, m);
		i++;
	}
	
	return 0;
}

int main(int argc, char *argv[]) {
	
	int i; // 05 silsup5
	
	for (i = 0; i < 10; i++)
		printf("Hello Suyoung!\n");
	
	return 0;
}


int main(int argc, char *argv[]) {
	
	int i=0; // 05 silsup6
	char c;
	
	printf("input sentence:");
	
	while ((c=getchar()) != '\n')
	{
		if ( '0' <= c && c <= '9' )
		{
			i++;
		}
	}
	
	printf("number is %d", i);
	
	return 0;
}


int main(int argc, char *argv[]) {
	
	int ans=50, my, i=0; // 05 silsup7
	
	
	do
	{
		printf("input answer:");
		scanf("%d", &my);
		if(my > ans)
		{
			printf("answer is smaller\n");
	
		}
		else if(my < ans)
		{
			printf("answer is bigger\n");
		}
		i++;
	
		
	}while(my!=ans);
	
	printf("Congratulation! answer is %d \n you won %d times", ans, i);
	
	
	return 0;
}
