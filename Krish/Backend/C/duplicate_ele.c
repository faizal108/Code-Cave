#include<stdio.h>

void duplicate(int a[],int n)
{
    int left=0,right=0;
    int temp[n];

    while(right<n)
    {
        if(a[right]==a[left])
    }

    for(j=0;j<n;j++)
        printf("%d",temp[j]);
}

int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    duplicate(a,n);
return 0;
}