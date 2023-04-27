#include<stdio.h>
//Program to print the largest and second largest element of the array.

int main()
{
	int a[100],i,n;
	int l,sl;
	printf("Enter the size of the array?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the elements of array:\n");
		scanf("%d",&a[i]);
	}
	l=a[0];
	sl=a[1];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>l)
		{
			sl=l;
			l=a[i];
			
		}
	}
	printf("largest=%d\n",l);
	printf("second largest=%d\n",sl);
return 0;
}
