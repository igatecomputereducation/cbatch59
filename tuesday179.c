#include<stdio.h>
void rectangle(int,int);
int main()
{
	int len,bre;
	printf("Length:");
	scanf("%i",&len);
	printf("Breadth:");
	scanf("%i",&bre);
	rectangle(len,bre);
	return 0;
}
void rectangle(int l,int b)
{
	int a,p;
	a=l*b;
	p=2*(l+b);
	printf("Area %i\n",a);
	printf("Perimeter %i",p);
}




