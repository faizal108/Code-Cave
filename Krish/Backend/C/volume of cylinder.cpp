#include<stdio.h>
#include<conio.h>
#define PI 3.1415
// Programe to calculate volume of cylinder by KRISH PATEL.
int main(){
	int r,h;
	float v;
	printf("entwr the radius and height of a cylinder\n");
	scanf("%d %d",&r,&h);
	
	v= PI*r*r*h;
	
	printf("volume of cylinder is = %f",v);
return 0;
}
