#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age:");
	scanf("%i",&age);
	(age>=18)?printf("Right to vote"):printf("No right to vote");
	return 0;
}
