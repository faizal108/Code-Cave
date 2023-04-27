#include <stdio.h>
#include <conio.h>
// programe by krish.
/*display the table of entered number.*/

int main(){
	int x;
	int y=1;
	printf("enter the number whose table should be displayed\n");
	scanf("%d",&x);
	printf("table of the number:\n");
	
		for(y=1;y<=10;y++){
			printf("%d * %d = %d\n",x,y,x*y);
		}
	
return 0;
}

