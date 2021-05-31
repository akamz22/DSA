//#include <bits/stdc++.h>
//#include<iostream>
#include<stdio.h>
//using namespace std;
int main()
{ //dounion
    int i = 0, j = 0, m = 6, n = 7;
    int arr1[m] = {5, 8, 14, 16, 17, 20};
    int arr2[n] = {5, 14, 17, 19, 20, 22, 23};
    int count = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i++]);
            count++;
        }
        else if (arr1[i] > arr2[j])
        {
            printf("%d ", arr2[j++]);
            count++;
        }
        else
        {
            printf("%d ", arr2[j++]);
            i++;
            count++;
        }
    }
    while (i < m)
    {
        printf("%d ", arr1[i++]);
        count++;
    }
    while (j < n)
    {
        printf("%d ", arr2[j++]);
        count++;
    }
    printf("\n");

    return 0;
}