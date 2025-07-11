#include<stdio.h>
void process(int,int);
int main()
{
	int a=10,b=20;	
	process(a,b);
	printf("%i\n",a);
	printf("%i\n",b);
	return 0;
}
void process(int p,int q)
{
	p=p+5;
	q=q+5;
}
