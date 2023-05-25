#include <iostream>
#include <vector>
using namespace std;
int firstOccurence(vector <int> v ,int key)
{
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;
    int index = -1;
    while(start <= end)
    {
      
        if(v[mid] == key)
        {
            // first condition 
            index = mid;
            // going to left 
            end = mid - 1;
        }
        if(key > v[mid])
        {
            start = mid + 1;
        }
        if(key < v[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;

    }
    return index;
}
int main()
{
    vector <int> v = {1,2,6,7,8,3,3,3,3,3,5};
    int ans = firstOccurence(v,3);
    int target = 3;
    cout  << "first occurence at : " << ans << endl;
    auto ans2 = lower_bound(v.begin() , v.end(),target);
    
    
    return 0;
}