#include<stdio.h>
#include<conio.h>
// programe to convert fehrenheit to celsius by KRISH PATEL.

int main(){
	float f,c;
	printf("enter the value of temperature in fehrenheit\n");
	scanf("%f",&f);
	
	c= 5*(f-32)/9;
	printf("value of temperature in celcius = %f",c);
	
return 0;
}
