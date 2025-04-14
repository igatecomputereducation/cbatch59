#include<stdio.h>
int main()
{
	int qty;
	float price,bill,dis,nbill;
	printf("Price:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%i",&qty);
	bill=price*qty;
	if(bill>10000)
		dis=bill*5/100;
	if(bill<=10000)
		dis=bill*2/100;
	nbill=bill-dis;
	printf("Bill %.2f\n",bill);
	printf("Discount %.2f\n",dis);
	printf("Netbill %.2f",nbill);
	return 0;
}
