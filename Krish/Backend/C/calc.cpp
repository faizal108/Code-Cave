#include<stdio.h>
#include<conio.h>
// programe to perform four basic operation (basic calc) by KRISH PATEL.

int main(){
	float a,b;
	int m1,m2;
	int choice;
	
	printf("\t\t\t\t calculator\n\n\n");
	
	printf("menu of calculator:\n\n");
	printf("-------------------\n\n");
	printf("1. Addition\n");
	printf("2. Substraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Modulo division (reminder)\n\n");
	printf("-------------------\n\n");
	
	printf("give your choice :");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\n\nyou have selected Addition\n");
			printf("enter two numbers:\n");
			scanf("%f %f",&a,&b);
			printf("the answer is %f",a+b);
			break;
			
		case 2:
			printf("\nyou have selected Substraction\n");
			printf("enter two numbers:\n");
			scanf("%f %f",&a,&b);
			printf("the answer is %f",a-b);
			break;
			
		case 3:
			printf("\nyou have selected Multiplication\n");
			printf("enter two numbers:\n");
			scanf("%f %f",&a,&b);
			printf("the answer is %f",a*b);
			break;
			
		case 4:
			printf("\nyou have selected Division\n");
			printf("enter two numbers:\n");
			scanf("%f %f",&a,&b);
			printf("the answer is %f",a/b);
			break;
			
		case 5:
			printf("\nyou have selected Modulo division\n");
			printf("enter two numbers:\n");
			scanf("%d %d",&m1,&m2);
			printf("the answer is %d",m1%m2);
			break;
			
	}
		printf("\n\nthank you!!");
return 0;
}
