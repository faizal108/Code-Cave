#include<stdio.h>
// Enormous Input Test from codechef. Problem Code: INTEST

int main()
{
	int i,n,k;
	int t,count=0;
	
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);
		if(t%k==0)
			count++;
	}
	
	printf("%d",count);
return 0;
}
