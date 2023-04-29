#include<stdio.h>
#include<conio.h>

// programe to check wheather the number is pallindrome or not.

int main(){
	
	int i,num,n;
	int rev=0;
	
	printf("enter the integer number:\n");
	scanf("%d",&num);
	n=num;
	while(n!=0){
		i=n%10;
		n=n/10;
		rev = rev*10 +i;
		 
	}
	if(num == rev)
		printf("the number is pallindrome.");
		
	else
		printf("the number is not pallindrome.");
	
return 0;
}
