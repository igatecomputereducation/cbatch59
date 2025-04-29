#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("Salary:");
	scanf("%i",&sal);
	hra=(sal>=50000)?sal*15.0/100:sal*9.0/100;
	da=(sal>=50000)?sal*19.0/100:sal*13.0/100;
	gross=sal+hra+da;
	printf("House rent allowence %.2f\n",hra);
	printf("Dearness allowence %.2f\n",da);
	printf("Gross salary %.2f",gross);
	return 0;
}
