#include <iostream>
using namespace std;

void selection_sort(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        int min = arr[i];
        int min_pos = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                min_pos = j;
            }
        }
        swap(arr[i], arr[min_pos]);
    }
}

int main() {
    int arr[]{ 2,3,1,0,5,8 };
    selection_sort(arr, 6);

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
}
