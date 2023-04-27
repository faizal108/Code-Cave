#include<stdio.h>
#include<conio.h>
// programe to find maximum of three numbers by KRISH PATEL.

int main(){
	int a,b,c;
	printf("enter three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a > b)
	{
		if (a > c)
			printf("\n%d is the largest number",a);
			
		else
			printf("\n%d is the largest number",c);
	}
	
	else{
		if(b > c)
			printf("\n%d is the largest number",b);
	
		else
			printf("\n%d is the largest number",c);
	}
	
	return 0;
}
