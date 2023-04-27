#include<stdio.h>
#include<conio.h>
// programe to fing maximum & minimum of numbers.

int main()
{
	int a[10],i,n;
	int min,max;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("enter the number: ");
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
			
		else if(a[i]<min)
			min=a[i];
	}
	
	printf("\nlargest number is: %d\n",max);
	printf("\nsmallest number is: %d\n",min);
	
return 0;
}


