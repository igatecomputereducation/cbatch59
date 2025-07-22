#include<stdio.h>
int main()
{
	char a[50],ch;
	int i,vc=0,cc=0,dc=0,sp=0,sym=0,wc=0;
	
	printf("Enter any line of text..\n");
	gets(a);
	
	if(a[0]=='\0')
		wc=0;
	else
		wc=1;
		
	for(i=0;a[i]!='\0';i++)
	{
		ch=a[i];
		
		if(ch>='A' && ch<='Z')
			ch=ch+32;
		
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			vc++;
		else if(ch>='b' && ch<='z')
			cc++;
		else if(ch>='0' && ch<='9')		
			dc++;
		else if(ch==' ')
		{
			sp++;
			if(a[i+1]!=' ')
				wc++;
		}
		else
			sym++;
	}		
	
	if(vc>0)
		printf("Vowels %i\n",vc);
	if(cc>0)
		printf("Consonents %i\n",cc);
	if(dc>0)
		printf("Digits %i\n",dc);
	if(sp>0)
		printf("spaces %i\n",sp);
	if(sym>0)
		printf("Symbols %i\n",sym);
	if(wc>0)
		printf("Words %i\n",wc);
	
	return 0;
}
