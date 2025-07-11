#include<stdio.h>
void process(int*,int);
int main()
{
	int a[]={10,20,30,40,50};
	int i;
	process(a,5);
	for(i=0;i<5;i++)
		printf("%5i",*(a+i));
	return 0;
}
void process(int *x,int n)
{
	int i;
	for(i=0;i<n;i++)
		*(x+i)=*(x+i)+5;
}
