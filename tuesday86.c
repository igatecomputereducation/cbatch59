#include<stdio.h>
int main()
{
	int x,ll,ul;
	printf("Lower limit:");
	scanf("%i",&ll);
	printf("Upper limit:");
	scanf("%i",&ul);
	x=ll;
	abc:
		printf("%i\n",x);
		x=x+1;
	if(x<=ul) 
		goto abc;
	return 0;
}
