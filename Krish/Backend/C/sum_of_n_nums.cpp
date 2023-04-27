#include<stdio.h>
// programe to print sum of first n numbers by KRISH PATEL.

int main(){
	int i,n,sum=0;
	
	printf("enter the value of n:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum = sum+i;
	}
	
	printf("%d",sum);
return 0;
}
