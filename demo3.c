#include<stdio.h>
int box(int,int,int);
int main()
{
	int bre,wid,hei,vol;
	printf("Enter 3 sides of box..\n");
	scanf("%i%i%i",&bre,&wid,&hei);
	vol=box(bre,wid,hei);
	printf("Volume of box %i",vol);
	return 0;
}
int box(int x,int y,int z)
{
	return x*y*z;
}


