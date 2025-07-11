#include<stdio.h>
int main()
{
	int n;
	printf("Enter any integer:");
	scanf("%i",&n);
	if(n>=-99 && n<=-10  ||  n>=10 && n<=99)
		printf("Two digit number");
	else
		printf("Not a two digit number");
	return 0;
}
