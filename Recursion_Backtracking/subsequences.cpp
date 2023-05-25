#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printSubsequences(string str, string output, int i, vector<string> &v)
{

    // base case
    if (i >= str.length())
    {
        v.push_back(output);
        return;
    }
    // exclude call
    printSubsequences(str, output, i + 1, v);
    // include call
    output.push_back(str[i]);
    printSubsequences(str, output, i + 1, v);
}
int main()
{
    string str;
    cin >> str;
    string output = "";
    int i = 0;
    vector<string> v;
    printSubsequences(str, output, i, v);
    cout << "printing all subsequences :" << endl;
    sort(v.begin(), v.end());
    for (auto it : v)
    {
        cout << "'" << it << "'"
             << " ";
    }
    cout << endl;
    cout << "size of vector : " << v.size() << endl;
    return 0;
}