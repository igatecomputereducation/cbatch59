#include<stdio.h>
void billing(float,int,float);
int main()
{
	float price;
	int qty;
	printf("Price:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%i",&qty);
	billing(price,qty,5);
	return 0;
}
void billing(float p,int q,float d)
{
	float bill,dis,nbill;
	bill=p*q;
	dis=bill*d/100;
	nbill=bill-dis;
	printf("Bill     %.2f\n",bill);
	printf("Discount %.2f\n",dis);
	printf("Net bill %.2f\n",nbill);
}


