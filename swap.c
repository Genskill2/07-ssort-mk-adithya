#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void swap_max(int arr[], int l, int n){
    int largest = 0, position;
    for (int i = n; i < l; i++){
        if (arr[i] > largest){
            largest = arr[i];
            position = i;
        }
    }
    if (position != n){
        arr[position] = arr[n];
        arr[n] = largest;
    }
}

void ssort(int arr[], int l){
    for (int i = 0; i < l; i++){
        swap_max(arr, l, i);
    }
}
