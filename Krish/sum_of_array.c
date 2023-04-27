#include<stdio.h>
#include<conio.h>
//programe to find sum and average of n numbers using array.

int main()
{
	int a[10],i,sum=0;
	float avg;
	
	for(i=0;i<=9;i++)
	{
		printf("enter the numbers: ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<=9;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/10;
	printf("sum of the numbers: %d\n",sum);
	printf("average of the numbers: %f\n",avg);
	
return 0;
}
