#include<stdio.h>
int main()
{
	int n,temp,fi,se,th,sum;
	printf("Enter any 3 digit natural number:");
	scanf("%i",&n);
	temp=n;
	th=n%10;
	n=n/10;
	se=n%10;
	n=n/10;
	fi=n%10;
	sum=fi*fi*fi+se*se*se+th*th*th;
	if(temp==sum)
		printf("Armstrong number");
	else
		printf("Not an armstrong number");
	return 0;
}
