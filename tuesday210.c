#include<stdio.h>
int main()
{
	int qty,*q=&qty;
	float price,bill,*p=&price,*b=&bill;
	printf("Price:");
	scanf("%f",p);
	printf("Quantity:");
	scanf("%i",q);
	*b=(*p)*(*q);
	printf("Total bill %f",*b);
	return 0;
}
