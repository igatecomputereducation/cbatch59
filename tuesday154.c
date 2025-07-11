#include<stdio.h>
int main()
{
	int a[50],i,n,min,max;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter the elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	min=max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
		if(a[i]>max)
			max=a[i];
	}
	
	printf("Minimum element %i\n",min);
	printf("Maximum element %i",max);
	return 0;
}
