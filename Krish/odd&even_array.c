#include<stdio.h>
#include<conio.h>
//programe to count odd and even numbers from given n numbers.

int main()
{
	int a[10],i,n;
	int odd=0,even=0;
	printf("how many numbers?\n");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("enter the number: ");
		scanf("%d",&a[i]);
		
		if(a[i]%2 == 0)
			even++;
			
		else if(a[i]%2 != 0)
			odd++;
	}
	
	printf("\n number of odds: %d",odd);
	printf("\n number of evens: %d",even);
	
return 0;
}
