#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector <int> &arr)
{
    int n = arr.size();

    for(int round = 0 ; round < n - 1 ; round++)
    {
        bool swapped = false;

        for(int j = 0 ; j < n - round - 1 ; j++ )
        {
            if(arr[j] >= arr[j+1]){

                swapped = true;

                swap(arr[j] , arr[j+1]);
            }
        }
        if(swapped == false)
        {
            // already sorted so no need to sort
            break;
        }
    }
}
int main()
{
    vector <int> arr{10,1,7,8,9};

    bubble_sort(arr);

    for( int i = 0 ; i < arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
     
    cout << endl;
    return 0;
}