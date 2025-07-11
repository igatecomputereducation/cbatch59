#include<stdio.h>
int main()
{
	int n,i,*p;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	p=(int*)malloc(n*sizeof(int));
	
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",p+i);
	
	printf("The given elements are..\n");
	for(i=0;i<n;i++)
		printf("%5i",*(p+i));
		
	free(p);
	return 0;
}
