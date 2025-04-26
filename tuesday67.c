#include<stdio.h>
int main()
{
	float hei,wei,bmi;
	printf("Height in feets:");
	scanf("%f",&hei);
	printf("Weight in kgs:");
	scanf("%f",&wei);
	hei=hei*0.3048;
	bmi=wei/(hei*hei);
	printf("Your Body Mass Index %f\n",bmi);
	if(bmi>=30)
		printf("Obese");
	else if(bmi>=25)
		printf("Overweight");
	else if(bmi>=18.5)
		printf("Normal weight");
	else
		printf("Eat sleep and repeat");
	return 0;
}
