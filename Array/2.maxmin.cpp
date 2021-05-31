//Find the maximum and minimum element in an array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {21, 34, 46, 75, 78, 10, 48};
    int max = 0, i;
    int min = 0;

    for (i = 0; i < 7; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    min = arr[0];
    for (i = 0; i < 7; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Max is %d Min is %d", max, min);
    return 0;
}