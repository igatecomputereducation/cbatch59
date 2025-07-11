#include<stdio.h>
int main()
{
	int a[50],n,i,pos;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter the elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("Enter the position:");
	scanf("%i",&pos);
	
	if(pos<1 || pos>n)
		printf("Invalid position");
	else
	{
		pos--;
		
		for(i=n-1;i>=pos;i--)
			a[i+1]=a[i];
			
		printf("Insert a new element:");
		scanf("%i",&a[pos]);
		
		n++;
		
		printf("Result array..\n");
		for(i=0;i<n;i++)
			printf("%5i",a[i]);
	}
	
	return 0;
}
