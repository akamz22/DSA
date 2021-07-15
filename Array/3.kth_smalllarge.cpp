//Find the maximum and minimum element in an array
#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter number of elements ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];//{6,5,4,3,2,1};
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Enter the value of k");
    int k;
    scanf("%d", &k);
    printf("Kth largest elements is %d\n", arr[k + 1]);
    printf("Kth smallest element is %d", arr[n - k - 1]);

    return 0;
}