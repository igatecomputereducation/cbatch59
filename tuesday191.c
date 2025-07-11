#include<stdio.h>
int digsum(int);
int main()
{
	int n,sum;
	printf("Enter any natural number:");
	scanf("%i",&n);
	sum=digsum(n);
	printf("Sum of all the digits %i",sum);
	return 0;
}
int digsum(int n)
{
	int s;
	if(n==0)
		return 0;
	s=n%10+digsum(n/10);
	return s;
}
