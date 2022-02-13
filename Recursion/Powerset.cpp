#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> subsets;
void subseq(string p, string up)
{
    if (up.empty())
    {
        // cout << p << endl;
        subsets.push_back(p);
        return;
    }
    char ch = up[0];
    subseq(p + ch, up.substr(1));
    subseq(p, up.substr(1));
}
int main()
{
    subseq("", "cab");
    sort(subsets.begin(), subsets.end());
    subsets.erase(subsets.begin());
    for (auto ele : subsets)
        cout << ele << " ";
    return 0;
}