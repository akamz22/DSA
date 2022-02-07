#include <bits/stdc++.h>
#define long long int
using namespace std;
int32_t main()
{
  vector<int> v = {1, 1, 2, 2, 3, 4, 5, 6, 7, 6, 8, 8, 8, 9, 10};
  map<int, int> M;
  for (int i = 0; i < v.size(); i++)
  {

    M.insert(pair<int, int>(i+1, v[i]));
  }

  for (auto i : M)
  {
    cout << "key - " << i.first << " "
         << " Value - " << i.second << endl;
  }
}