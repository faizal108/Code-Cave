#include<stdio.h>
#include<conio.h>
// programe to find factorial of a given number.

int main(){
	
	int n,i,sum=1;
	printf("enter one integer number:\n");
	scanf("%d",&n);
	
	if(n<0){
	
		printf("enter positive value");
		
}

		
	else if(n==0){
	
		printf("factorial value is 0");
		
}
	else{
		
	for(i=n;i>=1;i--){
		
		sum=sum*i;
	}
	printf("factorial value is %d",sum);
}
return 0;
}
