//{ Driver Code Starts
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string s, int i)
    {
        // Your code here
        if (i < 0)
            return true;
        // cout << s[i] << " ";
        return ispar(s, i - 1);
        cout << s << " ";
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        Solution obj;
        int n = a.size();
        if (obj.ispar(a, n - 1))
            cout << "balanced" << endl;
        else
            cout << "not balanced" << endl;
    }
} // } Driver Code Ends