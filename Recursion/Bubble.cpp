#include <iostream>
using namespace std;
void bubble(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
        bubble(arr, n - 1);
    
}
int main()
{
    int n = 6;
    int arr[] = {2, 4, 1, 4, 6, 7};
    bubble(arr, 6);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}