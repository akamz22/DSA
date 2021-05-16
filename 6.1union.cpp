#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{ //dounion
    int i = 0, j = 0, m = 6, n = 7;
    int arr1[m] = {5, 8, 14, 16, 17, 20};
    int arr2[n] = {5, 14, 17, 19, 20, 22, 23};
    int arrres[m + n] = {0};
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i++]);
        }
        else if (arr1[i] > arr2[j])
        {
            printf("%d ", arr2[j++]);
        }
        else
        {
            printf("%d ", arr2[j++]);
            i++;
        }
    }
    while (i < m)
        printf("%d ", arr1[i++]);
    while (j < n)
        printf("%d ", arr2[j++]);
    printf("\n");
    
    return 0;
}