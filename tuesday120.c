#include<stdio.h>
#include<math.h>
int main()
{
	int n,t,count,sum;
	printf("Enter any natural number:");
	scanf("%i",&n);
	for(t=n,count=0;t!=0;t=t/10)
	{
		count++;
	}
	for(t=n,sum=0;t!=0;t=t/10)
	{
		sum=sum+pow(t%10,count);
	}
	if(sum==n)
		printf("Armstrong number");
	else
		printf("Not an armstrong number");
	return 0;
}
