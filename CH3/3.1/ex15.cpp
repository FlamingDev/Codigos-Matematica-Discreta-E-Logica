#include <iostream>
using namespace std;

/*Describe an algorithm that inserts an integer x in the ap
propriate position into the list a1,a2,…,an of integers
 that are in increasing order.*/

void sorted_insert(int *arr, int n, int x){
    int i = 0;
    // attempts to find appropriate slot for x
    while (arr[i] < x && arr[i] != 0 && i < n){ 
        i++;
    }
    // shifts greater elements to the right
    for (int j = n-1; j > i; j--){
        arr[j] = arr[j-1];
    }
    arr[i] = x;
}

int main() {
	int arr[8]{4,7,8,12,14,15,0,0};
	sorted_insert(arr,8,25);
	sorted_insert(arr,8,5);
	
	for (int i = 0; i < 8; i++){
	    cout << arr[i] << " ";
	}
	
}
