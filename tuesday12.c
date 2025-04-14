#include<stdio.h>
int main()
{
	int qty;
	float price,bill,dis,net_bill;
	printf("Price of product:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%i",&qty);
	bill=price*qty;
	dis=bill*5/100;
	net_bill=bill-dis;
	printf("Bill %.2f\n",bill);
	printf("Discount %.2f\n",dis);
	printf("Netbill %.2f",net_bill);
	return 0;
}
