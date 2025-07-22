#include<stdio.h>
struct address
{
	char name[20];
	char dno[20];
	char str[20];
	int pin;	
};
int main()
{
	struct address a;
	printf("Name:");
	gets(a.name);
	printf("Door No:");
	gets(a.dno);
	printf("Street:");
	gets(a.str);
	printf("Pin code:");
	scanf("%i",&a.pin);
	printf("\nYour address..\n");
	printf("----------------\n");
	printf("Name %s\nDoor No %s\nStreet %s\nPin %i",
								a.name,a.dno,a.str,a.pin);
	return 0;
}
