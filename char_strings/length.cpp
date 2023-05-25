#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int getLength(char arr[])
{
    int length = 0;
    int i = 0 ; 
    while(arr[i] != '\0'){
        length++;
        i++;
    }
    return length;
}
int main()
{
    char arr[100] = "omkar";
    cout << getLength(arr) << endl;
    cout << "Lenght by function is : " << strlen(arr) << endl;
    return 0;
}