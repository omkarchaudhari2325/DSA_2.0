#include <iostream>
using namespace std;

int partition(int * arr, int s, int e){
    // getting the pivot element 
    int pivotIndex = s;
    int pivotElement = arr[s];
    int count = 0;
    for(int i = s + 1 ; i <= e ; i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }
    // got the count in the count variable 
    // placing the pivotElement to the right position 
    int rightIndex = s + count;
    swap(arr[pivotIndex] , arr[rightIndex]);
    // right index successfully placed on the right place 
    pivotIndex = rightIndex;

    // checking for the left and the right part 
    // replace the small element at left of the pivot and large at the right of the pivot
    int i = s; 
    int j = e;
    while( i < pivotIndex && j > pivotIndex){
        
        while(arr[i] <= pivotElement){
            i++;
        }
        while(arr[j] > pivotElement){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
        swap(arr[i] , arr[j]);
    }
    }
    
    return pivotIndex;


}
void quickSort(int * arr, int s , int e){
    // base case 
    if(s >= e){
        return ;
    }

    // partition logic 
    int p = partition(arr,s,e);
    // left part call 
    quickSort(arr,s, p -1);

    // right part 
    quickSort(arr,p + 1 , e);
}
int main()
{
    int arr[] = {1 ,2, 8 , 10 , 60 , 12, 11 , 4, 4 , 4 };
    int n = sizeof(arr)/ sizeof(int);
    int s = 0;
    int e = n - 1;
    cout << "Before sorting " << endl;
    for(auto it : arr){
        cout << it << " ";
    }cout << endl;
    cout << "After sorting " << endl;
     quickSort(arr,s,e);
    for(auto it : arr){
        cout << it << " ";
    }cout << endl;
    return 0;
}