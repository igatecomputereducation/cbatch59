#include<stdio.h>
int main()
{
	int cmr,lmr,nu;
	float bill;
	printf("Current month meter reading:");
	scanf("%i",&cmr);
	printf("Last month meter reading:");
	scanf("%i",&lmr);
	nu=cmr-lmr;
	bill=nu*5.75;
	printf("Number of units consumed %i\n",nu);
	printf("Total bill %.2f",bill);
	return 0;
}
