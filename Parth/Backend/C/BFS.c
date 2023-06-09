//Implement breadth first search in C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int breadth_first_search(int a[], int n, int start, int end)
{
    int i, j, k, m, exp = 1, temp;
    int b[n];
    for (m = 0; m < n; m++)
    {
        for (i = 0; i < n; i++)
        {
            b[i] = 0;
        }
        for (i = 0; i < n; i++)
        {
            j = a[i] / exp;
            b[j]++;
        }
        for (i = 1; i < n; i++)
        {
            b[i] += b[i - 1];
        }
        for (i = n - 1; i >= 0; i--)
        {
            j = a[i] / exp;
            b[j]--;
            a[b[j]] = a[i];
        }
        exp *= 10;
    }
}
int main()
{
    int i, j, n, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    breadth_first_search(a, n, 0, n - 1);
    printf("Sorted elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
