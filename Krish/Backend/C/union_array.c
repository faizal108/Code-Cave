#include<stdio.h>
#include<stdbool.h>
/*
Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.
Union of the two arrays can be defined as the set containing distinct elements from both the arrays.
If there are repetitions, then only one occurrence of element should be printed in the union.
Example 1:
Input:
5 3
1 2 3 4 5
1 2 3
Output: 
5
Explanation: 
1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.
*/

void dounion(int big[],int small[],int max,int min)
{
    int i,j;
    bool exp;
    int count=max;
    for(j=0;j<min;j++)
    {
        for(i=0;i<max;i++)
        {
            if(big[i]!=small[j])
            {
                exp=true;
            }

            else
            {
                exp=false;
                break;
            }
        }
        if(exp==1)
            count++;
    }

    printf("%d",count);
}

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n,m;
        scanf("%d %d", &n,&m);
        int a[n],b[m];

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
        }

        if(n>m)
            dounion(a,b,n,m);

        else
            dounion(b,a,m,n);

    }
    return 0;
}