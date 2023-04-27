#include<stdio.h>
#include<conio.h>
#include<math.h>
// programe to find the roots of quadratic equation by KRISH PATEL.
	
	int main(){
		float a,b,c,d;
		float x,y;
		
		printf("enter the co-efficient of a,b and c:\n");
		scanf("%f%f%f",&a,&b,&c);
		
		if(a==0 && b!=0)
			printf("single root : %f",-c/b);
			
		d= b*b - 4*a*c;
		
		 if(d==0)
			printf("single root : %f",-b/2*a);
			
		else if(d>0){
			x = -b + sqrt(d)/2*a;
			y = -b - sqrt(d)/2*a;
			printf("roots are : %f and %f",x,y);
		}
return 0;			
}

