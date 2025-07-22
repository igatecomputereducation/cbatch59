#include<stdio.h>
#include<string.h>
int main()
{
	char x[50];
	int l;
	printf("Enter any string:");
	scanf("%s",x);
	l=strlen(x);
	printf("Length %i",l);
	return 0;
}

