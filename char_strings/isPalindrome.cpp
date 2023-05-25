#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(char *ch)
{
    int i = 0;
    int length = strlen(ch);
    int j = length - 1;
    while(i < j)
    {
        if(ch[i] != ch[j])
        {
            return false;   
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    char ch[100] = "moom";

    bool ans = isPalindrome(ch);

    if(ans)
    {
        cout << "String is palindrome" << endl;
    }
    else
    {
        cout << "String is not the palindrome " << endl;
    }
    return 0;
}