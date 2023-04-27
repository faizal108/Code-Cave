#include<stdio.h>
// programe to sum individual degits of given number by KRISH PATEL.

int main(){
	
	int num,n;
	int sum=0;
	
	printf("enter the integer number:\n");
	scanf("%d",&num);
	
	while(num!=0){
		
		n = num%10;
		sum = sum+n;
		num = num/10;
	}
	
	printf("%d",sum);
return 0;
}
