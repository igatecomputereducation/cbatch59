#include<stdio.h>
int main()
{
	int a,b,c;
	a=30!=80||40<80&&50==60;
	b=10>80 || !0==1 &&  0==!1;
	c=60<30 && 40!=20 || 30>40;
	printf("%i\n%i\n%i",a,b,c);
	return 0;
}
