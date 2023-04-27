#include<stdio.h>
   
int arr[1000000]={0};

//arr[0] arr[1] arr[2] arr[3] arr[4] arr[5]
void main()
{
	int a,n;
    scanf("%d",&n);
    while(n--)
    {
	    scanf("%d",&a);
        arr[a]++;
    }
    a=0;
    while(a<1000000)
    {
        while(arr[a])
        {
            printf("%d ",a);
            arr[a]--;
        }
    a++;
    }
}
