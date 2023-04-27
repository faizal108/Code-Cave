#include<stdio.h>
#include<conio.h>
//programe that finds max of N nums and how many times it is repeated

int main()
{
	int a[10],i,n;
	int max,count=0;
	
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("enter the number: ");
		scanf("%d",&a[i]);
	}
	max=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]==max)
			count++;
	}
	
	printf("\nmaximum of numbers is: %d and is repeated for %d times",max,count);
return 0;
}
