/******************************************************************************
 Describe an algorithm based on the binary search for de
termining the correct position in which to insert a new
 element in an already sorted list.
*******************************************************************************/

#include <iostream>


void binary_insert_sort(int *arr, int n, int x){
    int mid;
    int i = 0, j = n-1;
    
    while (i <= j){
        mid = (i+j)/2;
        if (x < arr[mid]){
            j = mid-1;
        }
        else{
            i = mid+1;
        }
    }
    int pos = i>=n? i-1 : i;
    
    for (int j = n-1; j > pos; j--){
        arr[j] = arr[j-1];
    }
    arr[pos] = x;
}

int main()
{
    int arr[]{3,5,7,14,16,0};
    binary_insert_sort(arr,6,17);
    
    for (int i = 0; i < 7; i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}
