#include<stdio.h>
#include<conio.h>
#define PI 3.1415
// programe to calculate area and circumference of a circle by KRISH PATEL.
int main(){

	int r;
	int area,circumference;
	printf("enter the value of radius\n");
	scanf("%d",&r);
	
	
	area= PI * r * r;
	circumference= 2 * PI * r;
	
	printf("area of circle of %d radius is %d and circumference of circle is %d",r,area,circumference);
	
return 0;
}

