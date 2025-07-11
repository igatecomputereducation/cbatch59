#include<stdio.h>
int main()
{
	int a[50],n,i,j,temp;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter the elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("Elements in ascending order...\n");
	for(i=0;i<n;i++)
		printf("%5i",a[i]);
	
	return 0;
}
