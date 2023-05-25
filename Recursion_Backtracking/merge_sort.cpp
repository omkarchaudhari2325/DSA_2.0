#include <iostream>
using namespace std;
void merge(int * arr,int s ,int e){
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *left  = new int[len1];
    int *right = new int[len2];


    // copy values 
    int k = s;
    for(int i = 0 ; i < len1 ;i++){
        left[i] = arr[k];
        k++;
    }
    k = mid + 1;
    for(int i = 0 ; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }
    // merginging the array 
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex] =  left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
            arr[mainArrayIndex] = right[rightIndex];
            rightIndex++;
            mainArrayIndex++;
        }
    }
    // for left array  
    while(leftIndex < len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    while(rightIndex < len2){
        arr[mainArrayIndex++] = right[rightIndex++];
    }
    delete left;
    delete right;
}
void mergeSort(int * arr,int s ,int e)
{
    // base case 
    if(s >= e)
    {
        // single element 
        return ;
    }
    int mid = s + ( e - s) / 2;
    //left part sort kardo recusrsioin 
    mergeSort(arr,s,mid);
    // right part sort kardo 
    mergeSort(arr,mid + 1 , e);
    // merging two sorted array 
    merge(arr,s,e);
}
int main()
{
    int arr[] = {4,5,13,2,2,2,2,2,2,12};
    int n = sizeof(arr) / sizeof(int);
    int s = 0;
    int e = n - 1;
    mergeSort(arr,s,e);
    for(auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}