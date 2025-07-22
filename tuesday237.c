#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];	
	printf("Enter any string:");
	scanf("%s",s);
	strrev(s);
	printf("Result string %s",s);
	return 0;
}
