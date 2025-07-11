#include<stdio.h>
#define area(x,y) x*y
#define peri(x,y) 2*(x+y)
int main()
{
	int l,b;
	printf("Length:");
	scanf("%i",&l);
	printf("Breadth:");
	scanf("%i",&b);
	printf("Area %i\n",area(l,b));
	printf("Perimeter %i",peri(l,b));
	return 0;
}
