#include<stdio.h>
int main()
{
	int n,rem,gr;
	printf("Enter any natural number");
	scanf("%i",&n);
	rem=n%9;
	gr=(rem==0)?9:rem;
	switch(gr)
	{
		case 1:
		case 7:
		case 9:
			printf("Lucky number");
			break;
		case 3:
		case 5:
			printf("Moderate number");
			break;
		default:
			printf("Not a good number");
	}
	return 0;
}
