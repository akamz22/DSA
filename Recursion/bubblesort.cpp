#include <iostream>
using namespace std;
void bubble(int arr[], int r, int c)
{
    if (r == 0)
    {
        return;
    }
    if (c < r)
    {
        if (arr[c] > arr[c + 1])
            swap(arr[c], arr[c + 1]);
        bubble(arr, r, c + 1);
    }
    else
    {
        bubble(arr, r - 1, 0);
    }
}
int main()
{
    int n = 6;
    int arr[] = {2, 4, 1, 4, 6, 7};
    bubble(arr, 5, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}