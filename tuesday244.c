#include<stdio.h>
int main()
{
	char a[50];
	
	printf("Enter a line of text:\n");
	gets(a);
	
	printf("The given text %s",a);
	return 0;
}
