#include<stdio.h>
#include "igate.h"
int main()
{
	int n;
	printf("Enter any integer:");
	scanf("%i",&n);
	if(factors_count(n)==2)
		printf("Prime number");
	else
		printf("Not a prime number");
	return 0;
}

