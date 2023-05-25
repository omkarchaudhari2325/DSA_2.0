#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    vector <int> nums = {2,6,5,8,11};
    vector <int> ans;
    int target = 14;
    int n = nums.size();
    unordered_map <int,int> m;
    for(int i = 0 ; i < n ; i++){
        int diff = target - nums[i];
        if(m.find(diff) != m.end() && m.find(diff)->second != i){
            ans.push_back(m[diff]);
            ans.push_back(i);
        }
        m[nums[i]] = i;
    }
    for(auto it : ans){
        cout << "[" << it << "]";
    }cout << endl;

    return 0;
}