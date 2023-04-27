#include<stdio.h>
// programe to check the given number is armstrong or not by KRISH PATEL.

int main(){
	int num,i,n;
	int sum=0;
	
	printf("enter the integer number:\n");
	scanf("%d",&n);
	num = n;
	while(n!=0)
	{	
		i = n%10;
		n = n/10;
		sum = sum + i*i*i;	
	}
	
	if(sum == num)
		printf("%d is arm.",num);
	else
	printf("%d is not arm.",num);
return 0;
}
