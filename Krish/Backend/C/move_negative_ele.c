#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j=0;
    int a[n],temp[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            temp[j]=a[i];
            j++;
        }
    }

    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            temp[j]=a[i];
            j++;
        }
    }

    for(j=0;j<n;j++)
    {
        printf("%d ",temp[j]);
    }
return 0;
}