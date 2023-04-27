#include<stdio.h>
#include<conio.h>
// Programe to calculate simple interest using the formula I = PRN/100 by KRISH PATEL.

int main(){
getch();
	int p,n; // p=amount r=rate n=duration
	float r,i;
	
	printf("enter the principle amount\n");
	scanf("%d",&p);
	
	printf("enter the rate of interest\n");
	scanf("%f",&r);
	
	printf("enter the number of years\n");
	scanf("%d",&n);
	
	i = p*r*n/100;
	
	printf("simple interest of amount %d at the rate of %f for %d years = %f",p,r,n,i);
return 0;	
}

