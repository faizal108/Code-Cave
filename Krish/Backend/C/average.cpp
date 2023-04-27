#include<stdio.h>
#include<conio.h>
// programe to find sum and average of 4 integer number by KRISH PATEL.
int main(){
	int n1,n2,n3,n4;
	int sum;
	float avg;
	printf("enter four numbers:\n");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	
	sum=n1+n2+n3+n4;
	avg= sum/4.0;
	
	printf("sum of %d %d %d %d is %d\n",n1,n2,n3,n4,sum);		
	printf("average of %d %d %d %d is %f",n1,n2,n3,n4,avg);		
		
return 0;
}
