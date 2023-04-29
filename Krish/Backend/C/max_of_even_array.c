#include<stdio.h>
#include<conio.h>
//programe to print sum of even elements and find max from evens

int main()
{
	int a[10],i,n;
	int sum=0,max=0;
	printf("how many numbers?\n");
	scanf("%d",&n);
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("enter the number: ");
		scanf("%d",&a[i]);
		
		if(a[i]%2==0)
		{
			sum=sum+a[i];
			
			if(max<a[i])
				max=a[i];
		}
	}
	printf("\nsum of even elements is: %d\n",sum);
	printf("maximum of even elements is: %d\n",max);
}
