#include<stdio.h>
void reverse(char*);
int main()
{
	char s[50];	
	printf("Enter any string:");
	scanf("%s",s);
	reverse(s);
	printf("Result string %s",s);
	return 0;
}
void reverse(char *p)
{
	int len,i,j;
	char temp;
	for(len=0,i=0;p[i]!='\0';i++)
			len++;
	for(i=0,j=len-1;i<j;i++,j--)
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
	}	
}
