#include <iostream>
#include <vector>
#include <map>
using namespace std;
void solve(vector<string> &ans ,vector<string> &mapping,int index,string output,string &digits){
    // base case 
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }
    // 1 case solving 
    int digit = digits[index] - '0';
    string value = mapping[digit];
    for(int i = 0 ; i < value.length() ; i++){
        char ch = value[i];
        output.push_back(ch);
        solve(ans, mapping , index + 1 ,output, digits);
        output.pop_back();
    }
}
int main(){
    string digits;
    cout << "Enter the digits : " << endl;
    cin >> digits ;
    vector <string> ans;
    int index = 0;
    vector <string> mapping(10);
    string output = "";
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "pqrs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";
    solve(ans,mapping,index,output,digits);
    cout << "The answer is : " << endl;
    for(auto it : ans){
        cout << it << " ";
    }cout << endl;
    return 0;
}