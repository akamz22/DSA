//Minimum number of jumps
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n;
    int l = 11;
    int arr[l] = {1, 3, 5, 4, 11, 2, 6, 7, 6, 8, 9};
    int sum = 0;
    int count = 0;
    for (i = 0; i <= l; i = i + arr[i])
    {
        printf("%d ", arr[i]);
        count++;
    }
    if (i == l)
        count--;
    printf("\n%d", count);
    return 0;
}