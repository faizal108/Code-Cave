#include<stdio.h>
#include<conio.h>
// programe to check weather the number is prime or not.

int main()
{
	int i,n;
	printf("enter the number:\n");
	scanf("%d",&n);
	
	if(n>0)
	{
		for(i=2;i<n;i++)
		{
			if (n%i == 0)
			{
				printf("number is not prime");
				break;
			}
			
			else if(n%i!=0 && i==n-1)
			{
				printf("number is prime");
				break;
			}
		}
	}
return 0;
}
