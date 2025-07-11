#include<stdio.h>
#define PI 3.14
int main()
{
	int rad;
	printf("Enter the radius:");
	scanf("%i",&rad);
	printf("Area %f\n",PI*rad*rad);
	printf("Circumference %f",2*PI*rad);
	return 0;
}
