/******************************************************************************
Express the binary insertion sort in pseudocode.
*******************************************************************************/

#include <iostream>

void binary_insertion_sort(int *arr, int n){
    int lo, hi;
    for (int i = 1; i < n; i++){
        lo = 0;
        hi = i-1;
        
        while(lo <= hi){
            int mid = (lo+hi)/2;
            if (arr[mid] > arr[i]){
                hi = mid-1;
                 
            }
            else{
                lo = mid+1;
            }
        }
        int temp = arr[i];
        for (int j = i; j > lo; j--){
            arr[j] = arr[j-1];
        }
        arr[lo] = temp;
    }
}

int main()
{
    int arr[]{2,5,4,19,3,7,9};
    binary_insertion_sort(arr,7);
    
    for (int i = 0; i < 7; i++){
        std::cout << arr[i] << " ";
    }

    return 0;
}
