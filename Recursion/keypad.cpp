#include <iostream>
#include <vector>
using namespace std;
void solve(string digit, string output, int index, vector<string> &ans, string mapping[])
{
    if (index >= digit.length())
    {
        // ans.push_back(output);
        cout << output << " ";
        return;
    }
    int number = digit[index] - '0';
    string value = mapping[number];
    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, output, index + 1, ans, mapping);
        output.pop_back();
    }
}
int main()
{
    vector<string> ans;
    string output;
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve("23", output, index, ans, mapping);
    return 0;
}