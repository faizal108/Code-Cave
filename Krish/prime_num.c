#include<stdio.h>
// programe to print first n prime numbers by KRISH PATEL.

int main(){
	int n,j=2;
	int i=2;
	int count=0;
	
	printf("how many prime numbers?\n");
	scanf("%d",&n);
	printf("The prime numbers are :\n");
	
	while (count<=n)
	{
		if (i == 2)
		{
			printf("%d,",i);
			count++;
			i++;
		}
		else
		{
			for (j=2;j<i;j++)
			{
				if (i%j == 0 && j==i-1)
					printf("%d %d,",i,j);
					count++;
					
			}
			i++;
		}
				
		
	}
	
	
	
	

return 0;	
}


