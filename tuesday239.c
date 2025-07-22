#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf("Enter any string:");
	scanf("%s",a);
	strcpy(b,a);
	printf("The result string %s",b);
	return 0;
}
