#include<stdio.h>
#include<conio.h>
// programe to sort given n numbers and display them in ascending& descending order.

int main()
{
	int i,j,n,temp;
	
	printf("how many numbers?\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the number: ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
return 0;
}
