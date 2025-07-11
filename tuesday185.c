#include<stdio.h>
void display(int[],int);
int main()
{
	int a[]={10,20,30,40,50};
	display(a,5);	
	return 0;
}
void display(int x[],int n)
{
	int i;
	printf("Elements of array..\n");
	for(i=0;i<n;i++)
		printf("%5i",x[i]);
}
