#include<stdio.h>
int main()
{
	int a[50],i,n,f,r;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter the elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("Find what:");
	scanf("%i",&f);
	
	printf("Replace with what:");
	scanf("%i",&r);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==f)
			a[i]=r;
	}
	
	printf("Result array..\n");
	for(i=0;i<n;i++)
		printf("%5i",a[i]);
	
	return 0;
}
