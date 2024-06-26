/******************************************************************************
Given n real numbers x1,x2,…,xn, find the two that are
 closest together by
 a) brute force
 b) sorting
*******************************************************************************/

#include <iostream>

struct Pair{
    float a;
    float b;
};

Pair* smallest_difference(float *arr, int n){
    Pair *closest = new Pair;
    float smallest_diff = arr[0] - arr[1];
    if (smallest_diff < 0) smallest_diff *= -1;
    
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            float diff = arr[i] - arr[j];
            if (diff < 0) diff *= -1;
            if (diff < smallest_diff){
                smallest_diff = diff;
                closest->a = arr[i];
                closest->b = arr[j];
            }
        }
    }
    return closest;
}

int main()
{
    float a[]{5.64,1.4,8.7,95.8,99.2};
    Pair *p = smallest_difference(a,5);
    std::cout << p->a << " " << p->b;
    return 0;
}
