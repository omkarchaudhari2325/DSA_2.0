#include <iostream>
using namespace std;

bool binarySearch(int arr[][4],int rows , int cols,int target)
{
    int s = 0;
    int totalSize = rows * cols;
    int e = totalSize - 1;
    int mid = s + (e - s) / 2;
    while(s <= e)
    {
        int rowIndex = mid / cols;
        int colIndex = mid % cols;
        int element = arr[rowIndex][colIndex];
        if(element == target)
        {
            cout << "Found at : " << rowIndex << "," << colIndex << endl;
            return true;
        }
        if(element > target)
        {
            e = mid - 1;

        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}
int main()
{
    int arr [5][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
     int rows = 5;
     int cols = 4;
     int target;
     cout << "Enter the target element : " << endl;
     cin >> target;
     bool ans = binarySearch(arr,rows,cols,target);
     if(ans)
     {
        cout << "Element is present " << endl;
     }
     else
     {
        cout << "Element is not present " << endl;
     }
    return 0;
}