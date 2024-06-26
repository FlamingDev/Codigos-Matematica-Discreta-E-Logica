/******************************************************************************
Devise an algorithm that finds the first term of a se
quence of integers that equals some previous term in the
 sequence.
*******************************************************************************/

#include <iostream>

// solution by brute force checking every elements previous terms 
int first_repeated(int *arr, int n){
    for (int i = 0; i < n; i++){
        for (int j = i-1; j >= 0; j--){
            if (arr[j] == arr[i]){
                return arr[j];
            }
        }
    }
    return -1;
}

int main()
{
    int arr[]{1,5,7,3,4,9,6,44,11,2,2};
    std::cout << first_repeated(arr,11);

    return 0;
}
