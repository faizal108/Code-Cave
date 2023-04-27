#include<stdio.h>
#include<conio.h>
// programe to find minimun and maximum of two numbers KRISH PATEL.
int main(){
	int max,min;
	int x,y;
	printf("enter two integer numbers\n");
	scanf("%d%d",&x,&y);
	
	max= (x>y) ? x : y;
	min= (x<y) ? x : y;
	
	printf("\nmaximum of %d and %d is %d\n",x,y,max);
	printf("minimum of %d and %d is %d\n",x,y,min);
	
return 0;	
}

