#include<stdio.h>

void PrintArray(int a[],int n)
{
	printf("\nafter sorting array elements are:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void Swap(int *a,int *b)
{
	int temp=*b;
	*b=*a;
	*a=temp;
}

void BubbleSort(int a[],int n)
{
	int i,j;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			+if(a[j]>a[j+1])
			{
				Swap(&a[j],&a[j+1]);
			}
		}
	}
}

//Driver code for program.
int main()
{
	int n;
	printf("number of elements in array:");
	scanf("%d",&n);
	int a[n];

	printf("enter array elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	BubbleSort(a,n);
	PrintArray(a,n);

return 0;
}
