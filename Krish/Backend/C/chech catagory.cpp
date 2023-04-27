#include<stdio.h>
#include<conio.h>
// programe to chech the catagory of given character. digit,uppercase,lowercase or other symbol by KRISH PATEL.

int main(){
	char i;
	
	printf("enter one character:\n");
	scanf("%c",&i);
	
	if((i>=0) && (i<=9))
		printf("%c is a digit\n",i);
	
	else if((i>='a') && (i<='z'))
		printf("%c is a lowercase",i);
	
	else            if((i>='A') && (i<='Z'))
		printf("%c is uppercase",i);
		
return 0;
}
