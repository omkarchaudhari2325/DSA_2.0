#include <iostream>
#include <vector>
using namespace std;
void print(vector <string> str)
{
    for(auto it : str)
    {
        cout << it << " ";
    }cout << endl;
}
int main()
{
    // vector <string> str = {"books","items","boxes","tables"};
 
    // for(auto it: str)
    // {
    //     cout << it << " ";
    // }cout << endl;
    vector <char> ch;
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j <= i; j++)
        {

            ch.push_back('*');

        }
        ch.push_back(' ');
    }
    for(auto it : ch)
    {
        cout << it << " ";
    }
    cout << endl;
    // for(int i = 0 ; i < str.size() ; i++)
    // {
    //     cout << "The index is " << i << " and the value is " << str[i] << endl;

    // }cout << endl;
    return 0;
}