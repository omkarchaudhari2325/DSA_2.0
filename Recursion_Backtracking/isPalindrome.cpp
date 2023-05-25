#include <iostream>
using namespace std;
bool isPalindrome(string str1,int start ,int end)
{
    if( start >= end){
        return true;
    }

    cout << "comparing " << str1[start] << " with " << str1[end] << endl;

    if(str1[start] != str1[end]){
        return false;
    }
    return isPalindrome(str1, start + 1 , end - 1);
}
int main()
{
    string str1 = "mernrem";
    int s = 0;
    int e = str1.size() -1;
    if(isPalindrome(str1,s ,e)){
        cout << "String is a palindrome " << endl;
    }
    else
    {
        cout << "String is not a palindrome " << endl;
    }
    return 0;
}