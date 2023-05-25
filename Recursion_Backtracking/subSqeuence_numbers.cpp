#include <iostream>
#include <vector>
using namespace std;
void subseq(vector<vector<int>> &ans, vector<int> nums, vector<int> &temp, int index)
{
    if (index > nums.size())
    {
        ans.push_back(temp);
        return;
    }
    // exclude call
    subseq(ans, nums, temp, index + 1);
    // include call
    temp.push_back(nums[index]);
    subseq(ans, nums, temp, index + 1);
}

vector<vector<int>> subsequence(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> temp;
    int index = 0;
    subseq(ans, nums, temp, index);
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3};
    // vector <vector<int>> ans ;
    vector<vector<int>> sequences;
    sequences = subsequence(nums);
    for (int i = 0; i < sequences.size(); i++)
    {
        for (int j = 0; j < sequences[i].size(); j++)
            cout << sequences[i][j] << " ";
        cout << endl;
    }
    return 0;
}