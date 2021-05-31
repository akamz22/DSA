#include<iostream>
using namespace std;
int main()
{ 
    //dointersection
    int i = 0, j = 0;
    int arr1[6] = {5, 8, 14, 16, 17, 20};
    int arr2[7] = {5, 14, 17, 19, 20, 22, 23};
    int arrres[13] = {0};
    
    while (i < 6 && j < 7)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else
        {
            printf("%d ", arr2[j++]);
            i++;
        }
    }

    return 0;
}