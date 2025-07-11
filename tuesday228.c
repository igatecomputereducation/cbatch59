#include<stdio.h>
int main()
{
	int *p,*q,n,m,i,j;
	
	printf("Number of blocks:");
	scanf("%i",&n);
	
	printf("Elements in each block:");
	scanf("%i",&m);
	
	p=(int*)calloc(n,m*sizeof(int));
	
	printf("Enter elements..\n");
	q=p;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++,q++)
			scanf("%i",q);
	}
	
	printf("Given elements are..\n");
	q=p;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++,q++)
			printf("%5i",*q);
		printf("\n\n");
	}
	return 0;
}
