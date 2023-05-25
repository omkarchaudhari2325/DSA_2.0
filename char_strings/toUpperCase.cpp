#include <iostream>
#include <string.h>
using namespace std;
void toUpperCase(char *ch)
{
    int i = 0;
    int length = strlen(ch) - 1;
    while(i <= length)
    {
        ch[i] = ch[i] - 'a' + 'A';
        i++;
    }
}
void toLowerCase(char *ch)
{
    int i = 0;
    int length = strlen(ch) - 1;
    while(i <= length)
    {
        ch[i] = ch[i] - 'A' + 'a';
        i++;
    }
}
int main(){
    char ch[100] = "OMKAR";
    // toUpperCase(ch);
    // cout << ch << endl;
    toLowerCase(ch);
    cout << ch << endl;
    return 0;
}