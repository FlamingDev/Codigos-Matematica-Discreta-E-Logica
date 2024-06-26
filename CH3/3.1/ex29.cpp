/******************************************************************************
Devise an algorithm that finds a mode in a list of nonde
creasing integers.
*******************************************************************************/

#include <iostream>
// 2 4 8 8 8 9 12 12 14
int mode(int *arr, int n){
    int mode_count = 1;
    int mode = arr[0];
    
    for (int i = 0; i < n; i++){
        int count = 1;
        int j = i;
        int element = arr[j];
        while (arr[j] == arr[j+1] && j < n){
            count++;
            j++;
        }
        if (count > mode_count){
            mode_count = count;
            mode = element;
        }
    }
    return mode;
} 

int main()
{
    int v[]{2,2,2,8,8,9,12,12,12,12};
    std::cout << mode(v,9);

    return 0;
}
