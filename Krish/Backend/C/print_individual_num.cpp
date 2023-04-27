#include <stdio.h>

int main(void) {
	int n,sum=0,i;
	
	printf("enter the integer digit:\n");
	scanf("%d",&n);
	
	while(n != 0){
	    i= n%10;
	    sum = sum + i;
	    n = n/10;
	}
	
	printf("\n%d",sum);
	return 0;
}


