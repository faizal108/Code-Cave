#include<stdio.h>
#include<conio.h>

// programe to demonstrate content justifier  by KRISH PATEL.
int main(){
	int a=3,b=500,c=7000;
	/*example :  %5d will create 5 blocks and will fill it from right side.
				  so if you assign %5d to int a it will give output as: _ _ _ _ 3*/
				  
	/* likewise %-5d will create 5 blocks and will fill numbers from left side.
				andf %+5d will print one + sign.*/
				
	printf("%5d\n",a);
	printf("%5d\n",b);
	printf("%5d\n\n\n",c);
	
	
	printf("%-5d\n",a);
	printf("%-5d\n",b);
	printf("%-5d\n\n\n",c);
	
	
	printf("%+5d\n",a);
	printf("%+5d\n",b);
	printf("%+5d\n",c);
	
}

