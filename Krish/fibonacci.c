#include<Stdio.h>
#include<conio.h>
// programe to print N fibonacci numbers by KRISH PATEL.

int main(){
	
	int n,n1,n2,n3;
	int count=0;
	
	printf("how many fibonacci numbers?\n");
	scanf("%d",&n);
	
	n1=0;
	n2=1;
	printf("fibonacci numbers are : %d ,%d ,",n1,n2);
	
	for(count=0;count<n-2;count++)							// (n-2) because two numbers 0 and 1 already printed.
	{
		printf("%d ,", n1+n2);
		n3 = n1+n2;
		n1 = n2;
		n2 = n3;
	}
	
return 0;
}
