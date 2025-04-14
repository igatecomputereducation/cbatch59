#include<stdio.h>
int main()
{
	int sal,sales;
	float allow,gross;
	printf("Salary:");
	scanf("%i",&sal);
	printf("Sales:");
	scanf("%i",&sales);
	allow=sales*2.0/100;
	gross=sal+allow;
	printf("--------------------------------\n");
	printf("Salary %i\n",sal);
	printf("Allowences %.2f\n",allow);
	printf("Gross salary %.2f",gross);
	return 0;
}
