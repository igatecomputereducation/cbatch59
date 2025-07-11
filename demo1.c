#include<stdio.h>
void display();
int main()
{
	display();
	display();
	display();
	return 0;
}
void display()
{
	static int a=100;
	a+=5;
	printf("%i\n",a);
}
