#include <stdio.h>
#include <malloc.h>

int* newarr(const int arr[], int n){
    int i;
    int *result = (int*)malloc(n * sizeof(int));
    // result array initialization
    for (i = 0; i < n; ++i) {
        result[i] = 1;
    }

    // first iteration, from left to right
    int product = 1;
    for (i=0; i< n; i++)
    {
        result[i] *= product;
        product *= arr[i];
    }
    // second iteration, from right to left
    product = 1;
    for (i = n - 1; i>-1; i--)
    {
        result[i] *= product;
        product *= arr[i];
    }
    return result;
}

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);

    int *result = newarr(arr, n);

    // printing the results
    for (int k = 0; k < n; k++)
        printf("%d ", result[k]);


    return 0;
}
