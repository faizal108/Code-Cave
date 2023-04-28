#include<stdio.h>
#include<conio.h>
// ATM problem from codechef. Problem Code: HS08TEST

int main()
{
	int amount;
	float balance,rem;
	
	scanf("%d %f",&amount,&balance);
	
	if((balance)>=(amount+0.5))
	{
		if(amount%5==0)
		{
			rem=balance-amount-0.5;
			printf("\n%f",rem);
		}
		
		else
		printf("\n%f",balance);
	}
	
	else
		printf("\n%f",balance);
return 0;
}
