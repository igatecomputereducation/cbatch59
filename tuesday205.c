#include<stdio.h>
int main()
{
	short x=125;
	int y=4567;
	char ch='A';
	printf("%hd\n",x);
	printf("%d\n",y);
	printf("%c\n",ch);
	printf("%u\n",&x);
	printf("%u\n",&y);
	printf("%u\n",&ch);
	return 0;
}
