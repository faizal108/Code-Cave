
#include <stdio.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int partition(int a[],int start,int end)
{
    int pivot=a[end];
    int pindex=start;
    for(int i=start;i<end;i++)
    {
        if(a[i]<=pivot)
        {
            swap(&a[i],&a[pindex]);
            pindex++;
        }
    }
    swap(&a[pindex],&a[end]);
    return pindex;
}

void quickSort(int a[],int start,int end)
{
    int k=1;
    while(k--)
    {
        int pindex=partition(a,start,end);
        quickSort(a,start,pindex-1);
        quickSort(a,pindex+1,end);
        k=0;
    }
    
}

void printArray(int a[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    int a[n];
    for( i=0;i<n;i++)
      scanf("%d",&a[i]);
    quickSort(a, 0, n-1);
    printArray(a, n);
    }
    return 0;
}  // } Driver Code Ends