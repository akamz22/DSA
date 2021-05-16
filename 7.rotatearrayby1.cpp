#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7, i;
    int arr[n] = {5, 14, 17, 19, 20, 22, 23};
    int temp = arr[n - 1];
    for (i = n - 1; i >= 1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}