#include<stdio.h>
int adding(int,int);
int main()
{
	int fir,sec,sm;
	printf("First number:");
	scanf("%i",&fir);
	printf("Second number:");
	scanf("%i",&sec);
	sm=adding(fir,sec);
	printf("Sum of two numbers %i",sm);
	return 0;
}
int adding(int a,int b)
{
	return a+b;
}

