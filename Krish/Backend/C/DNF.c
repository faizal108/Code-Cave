#include <stdio.h>

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void sort012(int a[], int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
  

    while (mid<=high)
    {
        if(a[mid]==0)
        {
            swap(&a[low],&a[mid]);
            low++;
            mid++;
        }

        else if(a[mid]==1)
        {
            mid++;
        }

        else 
        {
            swap(&a[mid],&a[high]);
            high--;
        }
    }
    
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends