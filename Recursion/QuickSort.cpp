#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int si, int ei)
{
    int i = si, j = ei;
    int count = 0;
    int pivot = arr[si];
    for (int k = i + 1; k <= j; k++)
    {
        if (arr[k] <= pivot)
            count++;
    }
    int pivotIndex = si + count;
    swap(arr[pivotIndex], arr[si]);
    while (i < pivotIndex && j > pivotIndex)
    {
        if (arr[i] <= pivot)
            i++;
        else if (arr[j] > pivot)
            j--;
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void QuickSort(vector<int> &arr, int si, int ei)
{
    if (si >= ei)
        return;
    int c = partition(arr, si, ei);
    QuickSort(arr, si, c - 1);
    QuickSort(arr, c + 1, ei);
}
int main()
{
    vector<int> arr = {2, 3, 4, 6, 1};
    QuickSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}