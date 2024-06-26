/******************************************************************************
 Adapt the bubble sort algorithm so that it stops when no
 interchanges are required. Express this more efficient ver
sion of the algorithm in pseudocode.
*******************************************************************************/

#include <iostream>

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int *arr, int n){
    for (int i = 0; i < n; i++){
        bool sorted = true;
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                sorted = false;
                swap(arr[j],arr[j+1]);
            }
        }
        if (sorted) return;
    }
}

int main()
{
    int arr[]{6,2,3,1,5,4,15,12}; 
    bubble_sort(arr,8);
    for (int i = 0; i < 8; i++){
        std::cout << arr[i] << " ";
    }

    return 0;
}
