#include <iostream>
using namespace std;
void sum(int arr[], int n)
{
    if (n < 1)
        return;
    int temp[n - 1];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i] + arr[i + 1];
    }
    sum(temp, n - 1);
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            cout << arr[i] << " ";
        else
            cout << arr[i] << ", ";
    }
    cout << endl;
}
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    sum(arr, n);
    return 0;
}
