#include<stdio.h>

void sumofarr(int a[],int n,int l,int r)
{
    int i,sum=0,ans;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }

    int x=(r-l+1)/n;
    int y=(r-l+1)%n;

    if(y==0)
    {
        ans=sum*x;  
        printf("%d",ans);
    }

    else
    {
        int lindex=(l%n)-1;
        int addsum=0;

        while(y>0)
        {
            addsum=addsum+a[lindex];
            lindex++;
            y--;
        }

        ans=(sum*x)+addsum;
        printf("%d",ans);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    int l,r;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&l,&r);

    sumofarr(a,n,l,r);
return 0;
}