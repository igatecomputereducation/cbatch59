#include<stdio.h>
int main()
{
	int amt,time;
	float rate,si,tot;
	char type;
	printf("Amount:");
	scanf("%i",&amt);
	printf("Time in months:");
	scanf("%i",&time);
	fflush(stdin);
	printf("Type of loan [p/b/h/v/e]:");
	scanf("%c",&type);
	switch(type)
	{
		case 'p':
			rate=1.10;
			break;
		case 'b':
			rate=1.30;
			break;
		case 'h':
			rate=0.80;
			break;
		case 'v':
			rate=1.00;
			break;
		default:
			rate=1.10;	
	}
	si=amt*time*rate/100;
	tot=amt+si;
	printf("Simple interest %.2f\n",si);
	printf("Total amount %.2f",tot);
	return 0;
}
