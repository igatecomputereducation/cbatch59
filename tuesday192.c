#include<stdio.h>
int reverse(int);
int main()
{
	int n,rev;
	printf("Enter any natural number:");
	scanf("%i",&n);
	rev=reverse(n);
	printf("Reverse number %i",rev);
	return 0;
}
int reverse(int n)
{
	int r;
	if(n==0)
		return 0;
	r=r*10+n%10;	
	reverse(n/10);
	return r;
}
