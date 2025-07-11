#include<stdio.h>
#include "igate.h"
int main()
{
	int n;
	printf("Enter any natural number:");
	scanf("%i",&n);
	if(reverse(n)==n)
		printf("Palindrome number");
	else
		printf("Not a palindrome number");
	return 0;
}
