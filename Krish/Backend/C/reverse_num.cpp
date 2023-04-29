#include<stdio.h>
// programe to print the individual digits of given integer number by KRISH PATEL.
int main(){
	int n,i;
	
	printf("enter the integer number:\n");
	scanf("%d",&n);
	printf("reversed number is :");
	while(n!=0)
	{
		i = n%10;
		n = n/10;
		
		printf("%d",i);
	}
return 0;
}
