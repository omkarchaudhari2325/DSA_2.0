#include<iostream>
#include <vector>
using namespace std;
void selectionSort(vector <int> &arr){

    int n = arr.size();
    // outer loop for n- 1 rounds 
    for(int i = 0 ; i < n; i++)
    {
        int minimum = i;

        // inner loop finding the minimum element 

        for(int j = i + 1; j < n ; j++)
        {
            if(arr[j] < arr[minimum])
            {
                minimum = j;
            }
        }
        swap(arr[i],arr[minimum]);
    }
}

int main()
{
    vector <int> arr{5,4,3,2,1};

    selectionSort(arr);
    for(int i = 0 ;i < arr.size() ; i++)
    {
        cout << arr[i] << " ";

    }
         cout << endl;
    return 0;
}