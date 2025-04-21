#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("Salary:");
	scanf("%i",&sal);
	if(sal>=100000)
	{
		hra=sal*12.0/100;
		da=sal*15.0/100;
	}
	else
	{
		hra=sal*8.0/100;
		da=sal*11.0/100;
	}
	gross=sal+hra+da;
	printf("---------------------------\n");
	printf("Salary %i\n",sal);
	printf("House rent allowence %.2f\n",hra);
	printf("Dearness allowence %.2f\n",da);
	printf("Gross salary %.2f",gross);
	getch();
	return 0;
}
