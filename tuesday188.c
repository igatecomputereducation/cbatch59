#include<stdio.h>
int trace(int[50][50],int);
int main()
{
	int a[50][50],n,i,j;
	printf("Enter the dimension of square matrix:");
	scanf("%i",&n);
	printf("Enter the matrix..\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%i",&a[i][j]);
	}
	printf("Trace of matrix %i",trace(a,n));
	return 0;
}
int trace(int x[50][50],int n)
{
	int i,sum;
	for(sum=0,i=0;i<n;i++)
		sum=sum+x[i][i];
	return sum;
}

