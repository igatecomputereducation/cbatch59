#include<stdio.h>
float box(float,float,float);
int main()
{
	float bre,wid,hei,vol;
	printf("Enter 3 sides of a box..\n");
	scanf("%f%f%f",&bre,&wid,&hei);
	vol=box(bre,wid,hei);
	printf("Volume of box %f",vol);
	return 0;
}
float box(float b,float w,float h)
{
	return b*w*h;
}
