#include <iostream>
using namespace std;
void selection(int arr[], int r, int c, int max)
{
    if (r == 0)
    {
        return;
    }
    if (c < r)
    {
        if (arr[c] > arr[max])
            selection(arr, r, c + 1, c);
        else
            selection(arr, r, c + 1, max);
    }
    else
    {
        swap(arr[max], arr[r - 1]);
        selection(arr, r - 1, 0, 0);
    }
}
int main()
{
    int n = 6;
    int arr[] = {2, 4, 1, 4, 6, 7};
    selection(arr, 5, 0,0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}