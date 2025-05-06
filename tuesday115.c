#include<stdio.h>
int main()
{
	int n,rev,temp;
	printf("Enter any natural number:");
	scanf("%i",&n);
	for(temp=n,rev=0;n!=0;n=n/10)
	{
		rev=rev*10+n%10;
	}
	if(rev==temp)
		printf("Palindrome number");
	else
		printf("Not a Palindrome number");
	return 0;
}
