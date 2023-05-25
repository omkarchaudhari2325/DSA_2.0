#include <iostream>
using namespace std;
void merge(int * arr, int s , int e){
    // int i = 0 ; 
    // int j = 0;
    int mid = s + (e -s ) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int * left = new int[len1];
    int * right = new int[len2];
    int k = s;
    for(int i = 0 ; i < len1 ; i++){
        left[i] = arr[k];
        k++;
    }
    for(int i = 0 ; i < len2 ; i++){
        right[i] = arr[k];
        k++;
    }
    int i = 0;
    int j = 0 ;
    int mainIn = s;
    while(i < len1 && j < len2){
        if(left[i] < right[j]){
            arr[mainIn] = left[i];
            i++;
            mainIn++; 
        }
        else
        {
            arr[mainIn] = right[j];
            mainIn++;
            j++;
        }
    }
    while( i < len1){
        arr[mainIn] = left[i];
        mainIn++;
        i++;
    }
    while(j < len2){
        arr[mainIn] = right[j];
        mainIn++;
        j++;
    }
    delete left;
    delete right;
}
void mergeSort(int * arr, int s , int e){
    if(s >= e){
        return;
    }
    int mid = s + (e - s) / 2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid + 1 ,e);
    merge(arr,s,e);
}
int main()
{
    int arr[] = {6,1,3,1,4,4,5,3,1,4,5,5,89,8};
    int n1 = sizeof(arr) / sizeof(int);
    int s = 0; 
    int e = n1 - 1;
    mergeSort(arr,s,e);
    for(auto it : arr){
        cout << it << " ";
    }cout << endl;
    return 0;
}