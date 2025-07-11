#include<stdio.h>
int main()
{
	int num=450;
	printf("%i\n",num);
	printf("%u\n",&num);
	printf("%i\n",*(&num));
	return 0;
}
