#include<stdio.h>
int main()
{
	int a,b,c,*p,*q,*r;
	p=&a;
	q=&b;
	r=&c;
	printf("Enter 2 integers..\n");
	scanf("%i%i",p,q);
	*r=*p+*q;
	printf("Sum %i",*r);
	return 0;
}
