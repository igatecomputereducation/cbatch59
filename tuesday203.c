#include<stdio.h>
#define concat(x,y) x##y
int main()
{
	int grosssal=4000;	
	printf("%i",concat(gross,sal));
	return 0;
}
