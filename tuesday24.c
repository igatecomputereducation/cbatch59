#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a number into x:");
	scanf("%i",&x);
	printf("Enter a number into y:");
	scanf("%i",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("Value in x %i\n",x);
	printf("Value in y %i",y);
	return 0;
}
