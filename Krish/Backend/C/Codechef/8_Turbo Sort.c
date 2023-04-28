#include<stdio.h>
#include<conio.h>
//Turbo Sort Problem Code: TSORT
int main()
{
	int i,j,t,temp;
	long a[1000000];
	scanf("%d",&t);
	
		while(t--)
		{	i=0;
			scanf("%d",&a[i]);
			i++;
		}

	for(i=0;i<t-1;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	
	for(i=0;i<t;i++)
		printf("%d ",a[i]);
return 0;
}
