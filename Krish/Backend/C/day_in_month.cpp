#include<stdio.h>
// programe to print number of days in a given month by KRISH PATEL.

int main(){
	
	int month,days;
	printf("enter the number of month between 1-12\n");
	scanf("%d",&month);
	
	if(month==8)
		days=31;
	
	
	else if(month%2==0)
		days=30;
	
		
	else if(month%2!=0)
		days=31;
		
		
	printf("days=%d",days);
return 0;
}
