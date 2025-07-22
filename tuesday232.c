#include<stdio.h>
int main()
{
	char x[50];
	int i;
	printf("Enter your name:");
	scanf("%s",x);
	
	for(i=0;x[i]!='\0';i++)	
		printf("%c",x[i]);
	
	printf("\n\n");
	
	printf("Given name: %s",x);

	return 0;	
}
