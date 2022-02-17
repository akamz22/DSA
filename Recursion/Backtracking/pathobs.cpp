#include <iostream>
#include <vector>
using namespace std;
void pathWithRes(string p, vector<vector<int>> maze, int r, int c)
{

    if (r == maze.size() - 1 && c == maze[0].size() - 1)
    {
        cout << p << endl;
        return;
    }
    if (!maze[r][c])
        return;
    if (r < maze.size() - 1)
        pathWithRes(p + "D", maze, r + 1, c);
    if (c < maze[0].size() - 1)
        pathWithRes(p + "R", maze, r, c + 1);
}
int main()
{
    int r, c;
    cin >> r >> c;
    string p = "";
    vector<vector<int>> maze{
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };
    pathWithRes(p,maze, 0, 0);
    return 0;
}