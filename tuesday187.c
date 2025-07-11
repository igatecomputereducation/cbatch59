#include<stdio.h>
void display(int[3][4],int,int);
int main()
{
	int a[3][4]={{10,20,30,40},{11,22,33,44},{11,12,13,14}};
	display(a,3,4);
	return 0;
}
void display(int x[3][4],int n,int m)
{
	int i,j;
	printf("Elements of matrix..\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%5i",x[i][j]);
		printf("\n\n");
	}
}
