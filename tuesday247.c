#include<stdio.h>
int main()
{
	char ch;
	ch='a';
	printf("%c\n",ch);
	ch=~ch;					//encryption
	printf("%c\n",ch);
	ch=~ch;					//decryption
	printf("%c\n",ch);
	return 0;
}
