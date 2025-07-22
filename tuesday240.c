#include<stdio.h>
int main()
{
	char a[50],b[50];
	printf("First string:");
	scanf("%s",a);
	printf("Second string:");
	scanf("%s",b);
	if(strcmp(a,b)==0)
		printf("Equals");
	else if(strcmp(a,b)>0)
		printf("Biggest string %s",a);
	else
		printf("Biggest string %s",b);
	return 0;
}
