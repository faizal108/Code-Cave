#include<stdio.h>
//programe to group month numbers according to the number of days.

int main()
{
	int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int a[12];
	int i,n;
	int c31=0,c30=0,c28=0;
	
	printf("enter the value of n:\n");
	scanf("%d",&n);
	printf("enter the month number:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(month[a[i]-1]==31)
			c31++;
			
		else if(month[a[i]-1]==30)
			c30++;
			
		else if(month[a[i]-1]==28)
			c28++;
	}
	printf("no. of months having 31 days=%d\n",c31);
	printf("no. of months having 30 days=%d\n",c30);
	printf("no. of months having 28 days=%d\n",c28);
	
return 0;
}
