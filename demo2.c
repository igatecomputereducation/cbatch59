#include<stdio.h>
void display();
extern int num;
int main()
{
	printf("%i\n",num);
	num+=5;
	display();
	printf("%i\n",num);
	return 0;
}
int num=10;
void display()
{
	printf("%i\n",num);
	num+=5;
}


