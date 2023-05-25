#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void permuteString(string &str, int i, vector<string> &output)
{
    if (i >= str.length())
    {
        output.push_back(str);
        return;
    }
    for (int j = 1; j < str.length(); j++)
    {
        swap(str[i], str[j]);
        permuteString(str, i + 1, output);
        swap(str[i], str[j]);
    }
}
vector<string> find_permutation(string S)
{
    vector<string> v;
    sort(S.begin(), S.end());
    do
    {
        v.push_back(S);
    } while (next_permutation(S.begin(), S.end()));

    return v;
}
int main()
{
    string str = "abb";
    int i = 0;
    vector<string> output;
    output = find_permutation(str);
    for(auto it : output){
        cout << it << " ";
    }cout << endl;
    // permuteString(str, i, output);
    // sort(output.begin(), output.end());
    // output.erase(unique(output.begin(), output.end()), output.end());

    // for (auto it : output)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;

    return 0;
}