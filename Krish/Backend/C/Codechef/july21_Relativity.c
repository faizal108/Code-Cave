#include<stdio.h>
//Relativity Problem Code: RELATIVE
int main()
{
	int t,g,c,v,h;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&g,&c);
		h= c*c/(2*g);
		printf("%d\n",h);
	}
return 0;
}
