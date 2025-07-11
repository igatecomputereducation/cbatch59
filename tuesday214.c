#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter value into a:");
	scanf("%i",&a);
	printf("Enter value into b:");
	scanf("%i",&b);
	swap(&a,&b);
	printf("Value in a %i\n",a);
	printf("Value in b %i",b);
}
void swap(int *p,int *q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}
