#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%i",&age);
	if(age>=60)
		printf("Senior adult");
	else if(age>=40)
		printf("Middle aged adult");
	else if(age>=20)
		printf("Young adult");
	else if(age>=13)
		printf("Adolescent");
	else if(age>=5)
		printf("Child");
	else if(age>=2)
		printf("toddler");
	else
		printf("Infant");
	return 0;
}
