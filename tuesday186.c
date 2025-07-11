#include<stdio.h>
int array_sum(int[],int);
int main()
{
	int a[50],n,i;
	printf("How many elements:");
	scanf("%i",&n);
	printf("Enter the elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	printf("Sum of elements %i",array_sum(a,n));
	return 0;
}
int array_sum(int x[],int n)
{
	int i,sum;
	for(sum=0,i=0;i<n;i++)
		sum=sum+x[i];
	return sum;	
}

