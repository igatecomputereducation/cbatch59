#include<stdio.h>
#define M
int main()
{
#ifdef M
	int l,b;
	printf("Enter 2 sides of rectangle..\n")	;
	scanf("%i%i",&l,&b);
	printf("Area %i\n",l*b);
	printf("Perimter %i",2*(l+b));
#else	
	int a,b;
	printf("Enter 2 integers..\n");
	scanf("%i%i",&a,&b);
	printf("Sum %i\n",a+b);
#endif
	getch();	
	return 0;
}
