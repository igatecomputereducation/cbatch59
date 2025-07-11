#include<stdio.h>
int main()
{
	int n,f,flag;
	printf("Enter any natural number:");
	scanf("%i",&n);
	printf("Find what?");
	scanf("%i",&f);
	for(flag=0;n!=0;n=n/10)
	{
		if(n%10==f)
		{
			flag=1;
			break;	
		}
	}
	if(flag)
		printf("Existed");
	else
		printf("Not existed");
	return 0;
}
