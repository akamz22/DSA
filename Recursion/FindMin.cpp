#include <iostream>
using namespace std;
int minimum(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    return min(arr[n-1],minimum(arr,n-1));
}
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = minimum(arr, n);
    cout<<min<<endl;
    return 0;
}
