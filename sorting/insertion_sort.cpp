#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> arr{10,7,5,9,8};
    int n = arr.size();
    for(int round = 1 ; round < n ; round++)
    {
        int val = arr[round];
        int j = round - 1 ;
        for(; j >= 0 ; j--)
        {
            if(arr[j] > val)
            {
                // shift
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        // copying the elements 
        arr[j+1] = val;
    }
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    return 0;
}