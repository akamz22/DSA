// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[],  int l,int mid, int h)
{   

    int res[h-l+1];
    int k = 0, i = l;
    // int mid = (l + h) / 2;
    int j = mid + 1;
    while (i <= mid && j <= h)
    {
        if (arr1[i] <= arr1[j])
            res[k++] = arr1[i++];
        else if (arr1[j] < arr1[i])
            res[k++] = arr1[j++];
    }
    while (j <= h)
        res[k++] = arr1[j++];

    while (i <= mid)
        res[k++] = arr1[i++];
    for (i = 0; l <= h; i++)
    {
        arr1[l++] = res[i];
    }

}
void mergesort(int arr1[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        printf("Merge sort mid = %d  l =%d h=%d\n",mid,l, h);
        mergesort(arr1, l, mid);
        mergesort(arr1, mid + 1, h);
        merge(arr1, l,mid, h);
    }
}
int main()
{
    int arr1[] = {2, 1, 4, 15, 6, 12, 8, 18, 12, 15};
    int l, m, h;
    m = sizeof(arr1) / sizeof(arr1[0]);
    l = 0;
    h = m;
    mergesort(arr1, l, h-1);
    for (int i = 0; i < m; i++)
    {
        printf("%d ", arr1[i]);
    }
    
    return 0;
}