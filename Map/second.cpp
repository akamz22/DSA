#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> removedub(int *a, int size)
{
    vector<int> output;
    unordered_map<int, bool> seen;

    for (int i = 0; i < size; i++)
    {
        if (seen.count(a[i]) > 0)
        {
            continue;
        }
        seen[a[i]] = true;
        output.push_back(a[i]);
    }
    return output;
}
int main()
{
    int a[]={};


    
    return 0;
}