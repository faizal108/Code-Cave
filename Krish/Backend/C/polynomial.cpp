#include<stdio.h>
#include<conio.h>
#include<math.h>

// programe to evaluate the polynomial 3x^3 - 4x + 9 by KRISH PATEL.

int main(){
	
	float x,ans=0;
	printf("enter the value of x\n");
	scanf("%f",&x);
	
	ans= ans + 3*x*x*x;
	ans= ans - 4*x;
	ans= ans + 9;
	
	printf("\nvalue of polynomial is = %f",ans);
	
return 0;
}
