#include<stdio.h>
#include<math.h>
int main()
{
	const float pi=3.14;
	int rad;
	printf("Enter the radius:");
	scanf("%i",&rad);
	printf("Area of circle %f\n",pi*pow(rad,2));
	printf("Circumference of circle %f",2*pi*rad);
	return 0;
}


