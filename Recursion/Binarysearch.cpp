#include <iostream>
using namespace std;
int BinarySearch(int arr[], int low, int high, int target)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == target)
        return mid;
    if (arr[mid] < target)
        return BinarySearch(arr, mid + 1, high, target);
    else
        return BinarySearch(arr, low, mid - 1, target);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << BinarySearch(arr, 0, 10, 8);

    return 0;
}