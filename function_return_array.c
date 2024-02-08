/**
    * This program demonstrates the problem of returning an array from a function.
    * The array is created in the function and returned to the caller. The caller
    * receives the address of the array. However, the array is destroyed when the
    * function returns. Therefore, the caller receives an invalid address.
    * 
    * To fix this problem, we can use dynamic memory allocation to create the array
    * in the function. The caller can then free the memory when it is no longer needed.
*/

#include <stdio.h>

int* getArray() {
    int arr[5] = {1, 2, 3, 4, 5};
    return arr;
}

int main() {
    int* arr = getArray();

    printf("Array address: %p\n", arr);
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}