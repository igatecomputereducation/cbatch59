#include<stdio.h>
int main()
{
	int num,*p=&num;
	int i;
	for(i=0;i<4;i++)
		printf("%u\n",p+i);
	return 0;
}
