/******************************************************************************
*******************************************************************************/

#include <iostream>
// 1 2 3 4 5 comp = O(n)
// 5 4 3 2 1 comp = 1 + 2 + 3 + 4 = 10 ---> (n²-n)/2 O(n²)
void insertion_sort(int *arr, int n){
    int count = 0;
    for (int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i-1;
        while (arr[j] > temp && j >= 0){
            arr[j+1] = arr[j];
            j--;
            count++;
        }
        arr[j+1] = temp;
        //count++;
    }
    std::cout << count;
}

int main()
{
    int arr[]{5,4,3,2,1};
   
    insertion_sort(arr,5);
    
    for (int i = 0; i < 5; i++){
        std::cout << " " << arr[i] << " ";
    }

    return 0;
}
