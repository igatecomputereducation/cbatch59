#include<stdio.h>
int main()
{
	int age;
	char gen;
	float per;
	printf("Gender m/f:");
	scanf("%c",&gen);
	printf("Age:");
	scanf("%i",&age);
	printf("Percentage:");
	scanf("%f",&per);
	if(gen=='f' && age>=25 && age<=40 && per>=75)
		printf("selected");
	else
		printf("Not selected");
	return 0;
}
