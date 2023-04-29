#include<stdio.h>
#include<conio.h>
// programe to seperate integer part and fractional part from given float number by KRISH PATEL.

int main(){
	
	float a;
	 
	printf("enter one float number\n");
	scanf("%f",&a);
	printf("\ninteger part = %d\n",(int)a);
	printf("fractional part = %f",a-(int)a);
	
return 0;						
}	
