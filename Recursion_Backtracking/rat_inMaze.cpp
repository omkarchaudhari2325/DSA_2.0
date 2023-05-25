#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int i, int j, int row, int col, int arr[][4], vector<vector<bool>> &visited)
{
    if (((i >= 0 && i < row) && (j >= 0 && j < col)) && (arr[i][j] == 1) && (visited[i][j] == false))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve(int arr[][4], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output)
{
    if (i == row - 1 && j == col - 1)
    {
        path.push_back(output);
        return;
    }
    // directions controls
    // Down
    if (isSafe(i + 1, j, row, col, arr, visited))
    {
        visited[i + 1][j] = true;
        solve(arr, row, col, i + 1, j, visited, path, output + 'D');
        visited[i + 1][j] = false;
    }
    // Left call
    if (isSafe(i, j - 1, row, col, arr, visited))
    {
        visited[i][j - 1] = true;
        solve(arr, row, col, i, j - 1, visited, path, output + 'L');
        visited[i][j - 1] = false;
    }
    // Right call
    if (isSafe(i, j + 1, row, col, arr, visited))
    {
        visited[i][j + 1] = true;
        solve(arr, row, col, i, j + 1, visited, path, output + 'R');
        visited[i][j + 1] = false;
    }
    // Up call
    if (isSafe(i - 1, j, row, col, arr, visited))
    {
        visited[i - 1][j] = true;
        solve(arr, row, col, i - 1, j, visited, path, output + 'U');
        visited[i - 1][j] = false;
    }
}
int main()
{
    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};
    if (maze[0][0] == 0)
    {
        cout << "Path dosent exist" << endl;
        return 0;
    }
    int row = 4;
    int col = 4;
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    visited[0][0] = true;
    vector<string> path;
    string output = "";
    solve(maze, row, col, 0, 0, visited, path, output);
    cout << "The result is : " << endl;
    for (auto it : path)
    {
        cout << it << " ";
    }
    cout << endl;
    if (path.size() == 0)
    {
        cout << "No Path Exists" << endl;
    }
    cout << endl;

    return 0;
}