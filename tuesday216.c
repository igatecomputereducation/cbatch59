#include<stdio.h>
void manip(int,int,int*,int*,int*);
int main()
{
	int a,b,sm,sb,pro;
	printf("Enter 2 integers..\n");
	scanf("%i%i",&a,&b);
	manip(a,b,&sm,&sb,&pro);
	printf("Sum %i\n",sm);
	printf("Subtraction %i\n",sb);
	printf("Product %i",pro);
	return 0;
}
void manip(int x,int y,int *p,int *q,int *r)
{
	*p=x+y;
	*q=x-y;
	*r=x*y;
}
