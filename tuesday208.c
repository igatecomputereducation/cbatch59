#include<stdio.h>
int main()
{
	int num=786;
	int *p;
	p=&num;
	printf("%i\n",num);
	printf("%i\n",*(&num));
	printf("%i\n",*p);
	return 0;
}
