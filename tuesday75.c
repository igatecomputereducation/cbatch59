#include<stdio.h>
int main()
{
	int a,b,ch;
	printf("Enter 2 integers..\n");
	scanf("%i%i",&a,&b);
	printf("1.Sum\n2.Subtraction\n3.Product\n4.Division\n
									Enter your choice [1..4]");
	scanf("%i",&ch);
	switch(ch)
	{
		case 1:
			printf("Sum %i",a+b);
			break;
		case 2:
			printf("Subtraction %i",a-b);
			break;
		case 3:
			printf("Product %i",a*b);
			break;
		case 4:
			printf("Division %f",(float)a/b);
			break;
		default:
			printf("Invalid case");
	}
	return 0;
}
