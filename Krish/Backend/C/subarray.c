/*
Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.
Example 1:
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.

similar to sliding wiindow approach.
*/

#include<stdio.h>

void subarray(int a[],int n,int s)
{
    int sum=a[0];
    int left=0,right=0;
    while(right<=n-1)
    {
        if(sum==s)
        {
            printf("%d %d\n",left,right);
            break;
        }

        else if(sum<s)
        {
            right++;
            sum=sum+a[right];
        }

        else
        {
            sum=sum-a[left];
            left++;
        }
        
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,s,i;
        scanf("%d %d",&n,&s);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        subarray(a,n,s);
    }
return 0;  
}