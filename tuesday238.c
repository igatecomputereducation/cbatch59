#include<stdio.h>
void copy(char*,char*);
int main()
{
	char a[50],b[50];
	printf("Enter any string:");
	scanf("%s",a);
	copy(b,a);
	printf("The result string %s",b);
	return 0;
}
void copy(char *q,char *p)
{
	int i;
	for(i=0;p[i]!='\0';i++)
		q[i]=p[i];
	q[i]='\0';
}
