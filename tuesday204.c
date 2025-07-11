#include<stdio.h>
int main()
{
	short x,y;
	x=457;
	y=305;
	printf("%hd\n",x);
	printf("%hd\n",y);
	printf("%u\n",&x);
	printf("%u\n",&y);
	printf("%p\n",&x);
	printf("%p\n",&y);
	return 0;
}
