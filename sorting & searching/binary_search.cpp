#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int binary_Search(int *arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        cout << "comparisions are like  : " << arr[mid] << " with " << key << endl;
        int element = arr[mid];

        if (element == key)
        {
            return mid;
        }
        if (key > element)
        {
            // when the key is greater than the element 

            start = mid + 1;
        }
        else
        {
            // when the key is less than element 

            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
void print(int *arr, int size)
{
    int i = 0;
    while (size > 0)
    {
        cout << arr[i] << " ";
        i++;
        size--;
    }
    cout << endl;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    // int arr[5] = {10, 20, 30, 40, 50};
    // cout << "The array is : " << endl;
    // int size = 5;
    // print(arr, size);
    // int key;
    // cout << "Enter the key : " << endl;
    // cin >> key;
    // int ans = binary_search(arr, size, key);
    // if (ans)
    // {
    //     cout << "Element " << key << " present at index : " << ans << endl;
    // }
    // else
    // {
    //     cout << "Not Present " << endl;
    // }
    vector <int> v{1,2,3,4,5};
    int key = 50;
    if(binary_search(v.begin(),v.end(),key))
    {
        cout << "Present " << endl;
    }
    else
    {
        cout <<" Not present " << endl;
    }

    return 0;
}