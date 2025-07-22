#include<stdio.h>
int length(char*);
int main()
{
	char x[50];
	int l;
	printf("Enter any string:")	;
	scanf("%s",x);
	l=length(x);
	printf("Length %i",l);
	return 0;
}
int length(char *p)
{
	int len,i;
	for(len=0,i=0;p[i]!='\0';i++)
		len++;
	return len;
}
