#include<stdio.h>
// programe to print integer numbers divisable by 11 in given range.

int main(){
	
	int start,end;
	
	printf("enter starting range:\n");
	scanf("%d",&start);
	printf("enter ending range:\n");
	scanf("%d",&end);
	
	while(start<end){
		if(start%11 ==0)
			printf("%d\n",start);
		start++;
	}
	
}
