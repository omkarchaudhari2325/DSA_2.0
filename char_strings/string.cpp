#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "omkar is good";
    cout << str << endl;
    cout << str.substr(0,2) << endl;
    cout << str.find("everyone") << endl;
    cout << str << endl;
    cout << str.npos << endl;
    return 0;
}