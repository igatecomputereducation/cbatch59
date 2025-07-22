#include<stdio.h>
int main()
{
	char ch='a';
	short num=456;
	int qty=35;
	float price=45.50;
	void *p=&ch,*q=&num,*r=&qty,*s=&price;
	printf("%c\n",*((char*)p));
	printf("%hi\n",*((short*)q));
	printf("%i\n",*((int*)r));
	printf("%f\n",*((float*)s));
	return 0;
}
