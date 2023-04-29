#include<stdio.h>
#include<conio.h>
// programe to check wheather entered character is vowel or not by KRISH PATEL.
	
	int main(){
		char ch;
		
		printf("enter one character:\n");
		scanf("%c",&ch);
		
		if((ch>='a') && (ch<='z') || (ch>='A') && (ch<='Z'))
		{
		switch(ch)
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					printf("entered character is vowel\n");
					break;
					
				default : 
					printf("entered character is not a vowel");
			}
	}
	
	else("entered character is not an alphabet\n");
return 0;
	}
