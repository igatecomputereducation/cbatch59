#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf("Enter any string:");
	scanf("%s",a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
		printf("Palindrome string");
	else
		printf("Not a palindrome string");
	return 0;
}
