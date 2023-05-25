#include <iostream>
using namespace std;
// void lastOccur(string& s ,char x ,int &ans,int i){
//     if(i >= s.size())
//     {
//         return;
//     }
//     if(s[i] == x)
//     {
//         ans = i;
//     }
//     lastOccur(s,x,ans,i+1);
// }
void lastOccur2(string& s ,char x ,int &ans,int i){
    if(i < 0)
    {
        return;
    }
    if(s[i] == x)
    {
        ans = i;
        return;
    }
    lastOccur2(s,x,ans,i-1);
}
int main()
{
    string s;
    cin >> s;
    int ans = -1;
    char x ;
    cin >> x;
    int i  = 0;
    // lastOccur(s,x,ans,i);
    lastOccur2(s,x,ans,s.size()-1);
    cout << "Answer is " << ans << endl;
    return 0;

}