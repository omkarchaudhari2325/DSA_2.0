#include <iostream>
using namespace std;
bool solve(string &s, int si, string &p, int pi)
{
    // base casee
    if (si == s.size() && pi == p.size())
    {
        // if all the string is finished all the chars have been matched
        return true;
    }
    if (si == s.size() && pi < p.size())
    {
        while (pi < p.size())
        {
            if (p[pi] != '*')
            {
                return false;
            }
            pi++;
        }
        return true;
    }
    // single character matching
    if (s[si] == p[pi] || '?' == p[pi])
    {
        return solve(s, si + 1, p, pi + 1);
    }
    // astrik condition
    if (p[pi] == '*')
    {
        // a) mark as null char
        bool caseA = solve(s, si, p, pi + 1);
        // consume a character
        bool caseB = solve(s, si + 1, p, pi);
        return (caseA || caseB);
    }
    return false;
}
int main()
{
    string s = "abcdefg";
    string p = "ab*defg";
    int si = 0;
    int pi = 0;
    bool ans = solve(s, si, p, pi);
    if (ans)
    {
        cout << "Match" << endl;
    }
    else
    {
        cout << "Not Match" << endl;
    }
    return 0;
}