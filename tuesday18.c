#include<stdio.h>
int main()
{
	float cel,fah;
	printf("Temparature in celsius:");
	scanf("%f",&cel);
	fah=cel*9/5+32;
	printf("Temparature in fahrenheit %f",fah);
	return 0;
}
