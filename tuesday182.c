#include<stdio.h>
int digits_sum(int);
int main()
{
	int n;
	printf("Enter any natural number:");
	scanf("%i",&n);
	printf("Sum of all the digits %i",digits_sum(n));
	return 0;
}
int digits_sum(int n)
{
	int sum;
	for(sum=0;n!=0;n=n/10)
		sum+=n%10;
	return sum;		
}

