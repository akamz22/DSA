/*Given an array which consists of only 0, 1 and 2. Sort the array without 
using any sorting algo*/
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int n = 7;
    int arr[n] = {1, 0, 1, 2, 1, 0, 1};
    int arr1[3] = {0, 0, 0};
    for (j = 0; j < n; j++)
    {
        arr1[arr[j]]++;
        // if (arr[j] == 0)
        // {
        //     arr1[0]++;
        // }
        // else if (arr[j] == 1)
        // {
        //     arr1[1]++;
        // }
        // else if (arr[j] == 2)
        // {
        //     arr1[2]++;
        // }
    }
    int k = 0;
    for (i = 0; i < 3; i++)
    {
        int k = arr1[i];
        while (k > 0)
        {
            cout << i << "\n";
            k--;
        }
    }
    return 0;
}