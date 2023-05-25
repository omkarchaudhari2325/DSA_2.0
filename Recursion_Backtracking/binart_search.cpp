#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector <int> &v,int s , int e ,int &key)
{
    // case 1 
    if( s > e)
    {
        return -1;
    }
    int mid = s + (e - s ) / 2;
    // case 2
    if(v[mid] == key)
    {
        return mid;
    }
    int ans = v[mid] < key ? binarySearch(v,mid + 1,e ,key) : binarySearch(v,s,mid - 1,key);

    return ans;
}
int main()
{
    vector <int> v{10,20,40,60,70,90,99};
    int target = 99;
    int n = v.size();
    int s = 0;
    int e = n - 1;
    int ans = binarySearch(v,s,e,target);
    cout << "Answer is " << v[ans]   << endl;
    return 0;
}