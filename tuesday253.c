#include<stdio.h>
struct address
{
	char name[20];
	char dno[20];
	char str[20];
	char place[20];
	int pin;
};
int main()
{
	struct address a={
		"Ravi",
		"5-4-12/A",
		"Kukkala Gunta",
		"Kavali",
		524201
	};
	
	printf("Address..\n");
	printf("%s\n%s\n%s\n%s\n%i",
				a.name,a.dno,a.str,a.place,a.pin);
	return 0;
}


