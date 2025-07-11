#include<stdio.h>
int main()
{
	int num=45;
	int *p=&num;
	int **q=&p;
	printf("%i\n",num);
	printf("%i\n",*p);
	printf("%i\n",**q);
	return 0;
}
