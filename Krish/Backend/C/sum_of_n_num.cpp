#include<stdio.h>
// programe to print sum of first n numbers by KRISH PATEL.
int main(){
	int i=0,n,sum=0;
	
	printf("enter the value of n:\n");
	scanf("%d",&n);
	
	while(i<=n){
		sum = sum + i;
		i++;
	}
	printf("%d",sum);
return 0;
}
