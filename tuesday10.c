#include<stdio.h>
int main()
{
	float rad,area,cir;
	printf("Enter the radius of circle:");
	scanf("%f",&rad);
	area=3.14*rad*rad;
	cir=2*3.14*rad;
	printf("Area of circle %f\n",area);
	printf("Circumference of circle %f",cir);
	return 0;
}
