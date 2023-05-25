#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
using namespace std;

void addRE(string &str1,int p1,string &str2,int p2,string &ans,int carry){
    
    if(p1 < 0 && p2 < 0){
        
        if(carry != 0){
        ans.push_back(carry + '0');
       
        }
        return;
    }
    int n1 = (p1 >= 0 ? str1[p1] : '0') - '0';
    int n2 = (p2 >= 0 ? str2[p2] : '0') - '0';
    int csum = n1 + n2 + carry;
    int digit = csum % 10;
    carry = csum / 10;
    ans.push_back(digit + '0');
    addRE(str1 ,p1 - 1,str2 , p2 - 1 ,ans, carry);

}
int main()
{
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    string ans = "";
    int carry = 0;
    addRE(str1,str1.size() - 1 , str2, str2.size() - 1 , ans , carry);
    reverse(ans.begin(),ans.end());
    cout <<  ans << endl;
    return 0;
}