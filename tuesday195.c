#include<stdio.h>
#define out printf
#define in scanf
#define number int
int main()
{
	number a,b,c;
	out("Enter two integers..\n");
	in("%i%i",&a,&b);
	out("Sum %i",a+b);
	return 0;
}
