#include<stdio.h>
struct product
{
	int sno;
	char pname[20];
	int qty;
	float price;
	float amt;
};
int main()
{
	struct product p[20];
	int n,i;
	float bill;
	printf("How many products:");
	scanf("%i",&n);
	printf("Enter product details..\n");
	bill=0;
	for(i=0;i<n;i++)
	{
		p[i].sno=i+1;
		printf("Name:");
		scanf("%s",p[i].pname);
		printf("Quantity:");
		scanf("%i",&p[i].qty);
		printf("Price:");
		scanf("%f",&p[i].price);
		p[i].amt=p[i].price*p[i].qty;
		bill=bill+p[i].amt;
	}
	
	printf("\n\n          Cash Bill\n");
	printf("--------------------------------------------\n");
	printf("sno\tname\tqty\tprice\tAmount\n");
	printf("--------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%i\t%s\t%i\t%.2f\t%.2f\n",p[i].sno,p[i].pname,p[i].qty,p[i].price,p[i].amt);
	}
	printf("                                ----------\n");
	printf("                                %.2f\n",bill);
	printf("                                ----------");
	return 0;
}
