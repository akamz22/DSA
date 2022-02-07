#include <iostream>
using namespace std;
void merge(int *arr, int start, int mid, int end)
{
    cout << "In merge : " << start<<" " << mid<<" " << end<<" " <<endl<< "Merged Array : ";
    int i = start, j = mid+1, k = 0;
    int temp[end - start + 1];
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
            temp[k++] = arr[j++];
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= end)
    {
        temp[k++] = arr[j++];
    }
    k = 0;
    for (int i = start; i <= end; i++)
    {
        cout<<temp[k]<<" ";
        arr[i] = temp[k++];
    }
    cout<<endl;
}
void print(int arr[], int start, int end)
{
    cout << "[";
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
}
void mergeSort(int *arr, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        cout << "Input : "
             << " " << start << " " << end << " ";
        print(arr, start, mid);
        print(arr, mid + 1, end);
         cout << endl;
        cout << "Left : "
             << " " << start << " " << mid << " ";
        print(arr, start, mid);
         cout << endl;
        mergeSort(arr, start, mid);
        cout << "Right : "
             << " " << mid + 1 << " " << end << " ";
        print(arr, mid + 1, end);
         cout << endl;
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}
int main()
{

    int arr[] = {1, 3, 2, 3, 1};
    int end = 5, n = 5;
    mergeSort(arr, 0, end - 1);
    cout << "size : " << end - 1 << endl<<"Final merged array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}