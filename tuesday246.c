#include<stdio.h>
int main()
{
	char x[5][50];
	int i;
	
	printf("Enter 5 lines of text..\n");
	for(i=0;i<5;i++)
		gets(x[i]);
	
	printf("The given lines of text..\n");
	for(i=0;i<5;i++)
		printf("%s\n",x[i]);
		
	return 0;
}
