#include <iostream>
using namespace std;
int partition(int * arr, int s ,int e){
    // step 1
    // chossing the pivot element 
    int pivotIndex = s;
    int pivotElement = arr[s];
    // step 2
    // finding right position for the pivot element and place it there 
    int count = 0;
    for(int i = s + 1 ; i <= e ; i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }
    // when i came out of the loop then i have the pivot right position is ready
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    // step 3 
    // left side small and right side big elements 
    int i = s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex ){
        //   same element case 
        while(arr[i] <= pivotElement){
            i++;
        }
        while(arr[j] >  pivotElement){
            j--;
        }
        // there will be the two cases 
        // 1 You got the elements that are wrong 
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i],arr[j]);
        }

    }
    return pivotIndex;
}
void quickSort(int * arr, int s , int e){
    // base case 
    if(s >= e){
        return;
    }
    // partition logic 
    int p = partition(arr,s,e);

    // recrusive logic 
    // left 
    quickSort(arr,s,p-1);

    // right 
    quickSort(arr,p+1,e);

}
int main()
{
    int arr[] = {1,2,3,9,1,45,3,1,23,4};
    int n = (sizeof(arr)/sizeof(int));
    int s = 0 ;
    int e = n - 1;
    quickSort(arr,s,e);
    for(auto it : arr){
        cout << it << " ";
    }cout << endl;
    return 0;
}