#include<stdio.h>
#include<conio.h>
// programe to print multiple of N from given range.

int main()
{
	int n,start,end;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	printf("enter the starting and ending range:\n");
	scanf("%d %d",&start,&end);
	

		for(;start<=end;start++)
		{
			if(start%n==0)
				printf("%d ,",start);
				
			
		}
return 0;
}

