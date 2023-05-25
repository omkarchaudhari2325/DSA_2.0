#include <iostream>
#include <vector>
using namespace std;
void printDigits(int n, vector<int> &ans)
{
    if (n == 0)
    {
        // ans.push_back(0);
        return;
    }
    int digit = n % 10;
    printDigits(n / 10, ans);
    ans.push_back(abs(digit));
}
int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    printDigits(n, ans);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}