#include<stdio.h>
int main()
{
	int pmr,cmr,nu;
	float bill;
	printf("Previous month reading:");
	scanf("%i",&pmr);
	printf("Current month reading:");
	scanf("%i",&cmr);
	nu=cmr-pmr;
	if(nu>400)
		bill=nu*9.75;
	else if(nu>=226)
		bill=nu*8.75;
	else if(nu>=126)
		bill=nu*6.00;
	else if(nu>=76)
		bill=nu*4.50;
	else if(nu>=31)
		bill=nu*3.00;
	else
		bill=nu*1.90;
	printf("Number of units used %i\n",nu);
	printf("Bill to pay %.2f",bill);
	return 0;
}
