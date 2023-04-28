#include<stdio.h>
//Maximum Production Problem Code: EITA

int main()
{
	int d,x,y,z;
	int w1,w2;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d",&d,&x,&y,&z);
		w1=x*7;
		w2=y*d + z*(7-d);
		printf("%d\n",(w1>w2?w1:w2));
	}
return 0;
}
