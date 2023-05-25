#include <iostream>
using namespace std;
void merge(int * arr, int s ,int e){
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    // cerating the both arrays 
    int * left = new int[len1];
    int * right = new int[len2];
    // now copying the elements like wise  
    int k = s;
     cout << "value of the k is " << k << endl;
    for(int i = 0 ; i < len1 ; i++){
        left[i] = arr[k++];
    } 
    k = mid + 1;
    cout << "value of the k is " << k << endl;
    for(int i = 0 ; i < len2 ; i++){
        right[i] = arr[k++];
    }
    // copied all the elements now 
    // now comparing the elements from the both arrays 
    int leftArrayIndex = 0; 
    int rightArrayIndex = 0;
    int mainArrayIndex = s;
    while(leftArrayIndex < len1 && rightArrayIndex < len2){
        if(left[leftArrayIndex] < right[rightArrayIndex]){
            arr[mainArrayIndex++] = left[leftArrayIndex++]; 
        }
        else{
            arr[mainArrayIndex++] = right[rightArrayIndex++];
        }
    }
    // in this case now one array must be exhausted so 

    while(leftArrayIndex < len1){
        arr[mainArrayIndex++] = left[leftArrayIndex++]; 
    }
    while(rightArrayIndex < len2){
        arr[mainArrayIndex++] = right[rightArrayIndex++]; 
    }
    delete left;
    delete right;

}
void mergeSort(int * arr, int s , int e){
    if(s >= e){
        return;
    }
    int mid = s + (e - s ) / 2;
    // going for the left part now 
    mergeSort(arr,s,mid);
    // going for the right part 
    mergeSort(arr,mid + 1 , e);
    // now merging the both of the arrays 
    merge(arr,s,e);
}
int main(){
    int arr[] = {1,3,13,1,7,0,35,78,9};
    int n = sizeof(arr) / sizeof(int);
    int s = 0 ;
    int e = n - 1;
    mergeSort(arr,s,e);
    for(auto it : arr){
        cout << it << " ";
    }cout << endl;
    return 0;
}