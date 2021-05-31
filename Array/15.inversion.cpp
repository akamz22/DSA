#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int k = i+1; k < n; k++)
        {
            if (arr[i] > arr[k])
                count++;
        }
    }
    printf("Count = %d ", count);
    return 0;
}