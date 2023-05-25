#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector <int> &arr,int &n,int i)
{
    if(i == n-1 )
    {
        return true;
    }

    if(arr[i] < arr[i+1])
    {
        return true;
    }

    isSorted(arr,n,i + 1);

    return false;
}
int main()
{
    vector <int> v{50,20,30,40,50};
    int n = v.size();
    int i = 0;
    bool ans = isSorted(v,n,i);
    if(ans)
    {
        cout << "Array is sorted " << endl;
    }
    else
    {
        cout << "Array is not sorted " << endl;
    }

    return 0;
}