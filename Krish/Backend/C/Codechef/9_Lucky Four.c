#include<stdio.h>
//Lucky Four Problem Code: LUCKFOUR
int main()
{
	int t,count=0;
	int n,num;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		while(n>0)
		{
			num=n%10;
			if(num==4)
			{
				count++;
			}
				
			n=n/10;
			
		}
		printf("%d\n",count);
	}
return 0;
}
