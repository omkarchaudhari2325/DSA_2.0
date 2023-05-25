#include<iostream>
using namespace std;

bool linearSearch(int *arr,int size , int key)
{
    for(int i = 0 ; i < size ; i++)
    {
        cout << "Comparisons are like : " << arr[i] << " with " << key << endl;

        if(arr[i] == key)
        {
            return true;
        }

    }
    return false;
}
int main()
{
    int arr[5] = {2,4,3,1,3};
    int key = 4;
    bool ans = linearSearch(arr,5,key);
    if(ans)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }
    return 0;
}