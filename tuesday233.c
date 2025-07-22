#include<stdio.h>
int main()
{
	char name[20],str[20],place[20];
	printf("Name:");
	scanf("%s",name);
	printf("Street:");
	scanf("%s",str);
	printf("Place:");
	scanf("%s",place);
	printf("Your address..\n");
	printf("Name %s\nStreet %s\nPlace %s",name,str,place);
	return 0;
}
