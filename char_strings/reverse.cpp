#include <iostream>
using namespace std;
int getLength(char *arr)
{
    int length = 0;
    int i = 0 ; 
    while(arr[i] != '\0'){
        length++;
        i++;
    }
    return length;
}
void reverse(char *ch)
{
    int i = 0;
    int n = getLength(ch);
    int j = n - 1;
    while(i <= j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}
void addSymbol(char *ch)
{
    int length = getLength(ch);
    int i = 0;
    int n = length;
    while(i <= n)
    {
        if(ch[i] == ' ')
        {
            ch[i] = '@';
        }
        i++;
    }
}
int main(){
    char ch[100] = "omkar is my name";
    // reverse(ch);
    cout << ch << endl;
    addSymbol(ch);
    cout << "Symbolic char array is : " << ch << endl;
    return 0;
}