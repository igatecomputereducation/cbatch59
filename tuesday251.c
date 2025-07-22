#include<stdio.h>
struct emp
{
	int empno;
	char ename[20];
	int sal;
	float hra;
	float ins;
	float net;
};
int main()
{
	struct emp e;
	printf("Empno:");
	scanf("%i",&e.empno);
	fflush(stdin);
	printf("Name:");
	gets(e.ename);
	printf("Salary:");
	scanf("%i",&e.sal);
	e.hra=e.sal*12.0/100;
	e.ins=e.sal*10.0/100;
	e.net=(e.sal+e.hra)-e.ins;
	printf("\nPayslip...\n");
	printf("---------------------------\n");
	printf("Empno %i\nName %s\nSalary %i\nHRA %.2f\nInsurance %.2f\nNet salary %.2f",e.empno,e.ename,e.sal,e.hra,e.ins,e.net);
	return 0;
}
