#include<stdio.h>
int main()
{
	char a[50];
	int i,j,len,flag;
	
	printf("Enter any string:");
	scanf("%s",a);
	
	for(len=i=0;a[i]!='\0';i++)
		len++;
	
	flag=1;
	for(i=0,j=len-1;i<j;i++,j--)
	{
		if(a[i]!=a[j])
		{
			flag=0;
			break;	
		}
	}
	
	if(flag)
		printf("Palindrome string");
	else
		printf("Not a palindrome string");
		
	return 0;
}
