#include<stdio.h>
int main()
{
	int x,y,temp;
	printf("Enter a number into x:");
	scanf("%i",&x);
	printf("Enter a number into y:");
	scanf("%i",&y);
	temp=x;
	x=y;
	y=temp;
	printf("Value in x %i\n",x);
	printf("Value in y %i",y);
	return 0;
}
