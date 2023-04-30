#include<stdio.h>
//First and Last Digit.Problem Code: FLOW004

int main()
{
	int t,n;
	int fdigit,ldigit;
	
	scanf("%d",&t);
	while(t--)
	{	
		scanf("%d",&n);
		ldigit=n%10;
		while(n>=9)
		{
			n=n/10;
		}
		fdigit=n;
		printf("%d\n",fdigit+ldigit);
	}
return 0;
}
