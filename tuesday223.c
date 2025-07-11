#include<stdio.h>
void copy(int*,int*,int);
int main()
{
	int a[50],b[50],i,n;
	printf("How many elements:");
	scanf("%i",&n);
	printf("Enter the elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	copy(b,a,n);
	printf("Result array..\n");
	for(i=0;i<n;i++)
		printf("%5i",b[i]);
	return 0;
}
void copy(int *q,int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
		q[i]=p[i];
}
