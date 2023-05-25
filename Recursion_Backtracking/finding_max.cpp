#include <iostream>
#include <limits.h>
using namespace std;
void findMax(int *arr, int n, int i, int &maxi)
{
    if (i >= n)
    {
        return;
    }
    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }
    findMax(arr, n, i + 1, maxi);
}
void findMin(int *arr, int n, int i, int& mini)
{
    if (i >= n)
    {
        return;
    }
    if (arr[i] < mini)
    {
        mini = arr[i];
    }
    findMin(arr, n, i + 1, mini);
}
int main()
{
    int arr[] = {10, 30, 21, 44, 32, 17, 19, 66, 99};
    int n = (sizeof(arr) / sizeof(int));
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int i = 0;
    findMax(arr, n, i, maxi);
    cout << "maximum number is " << maxi << endl;
    findMin(arr,n,i,mini);
    cout << "minimum is " << mini << endl;

    return 0;
}