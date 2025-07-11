#include<stdio.h>
int main()
{
	int i,ll,ul;
	printf("Lower limit:");
	scanf("%i",&ll);
	printf("Upper limit:");
	scanf("%i",&ul);
	i=ul;
	while(i>=ll)
	{
		if(i%2!=0)
			printf("%i\n",i);
		i=i-1;
	}
	return 0;
}
