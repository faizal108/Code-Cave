#include<stdio.h>
// programe to dp addition of matrices.

int main()
{	
	int i,j;
	int m,n;
	int p,q;
	int a[100][100],b[100][100],c[100][100];
	printf("number of rows in first matrix:");
	scanf("%d",&m);
	printf("number of cols in first matrix:");
	scanf("%d",&n);
	
	printf("number of rows in second matrix:");
	scanf("%d",&p);
	printf("number of cols in second matrix:");
	scanf("%d",&q);
	
	if(m!=p || n!=q)
	{
		printf("\naddition is not possible");
		return 0;
	}
	
	printf("enter the matrix A elements:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter the matrix B elements:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("enter the matrix B elements:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
