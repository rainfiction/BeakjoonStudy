#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_INT_LENGTH 11

void swap(int *a, int *b);
void quickSort(int *arr, int start, int end);


int main(){
    char nchar[MAX_INT_LENGTH] = {'\0'};
    long long int n;
    int length;
    int numbers[MAX_INT_LENGTH] = {0};

    scanf("%s", nchar);
    length = strlen(nchar);

    for (int i = 0; i < length;i++){
        numbers[i] = nchar[i]-'0';
    }

    quickSort(numbers, 0, length - 1);

    for (int i = length-1; i >= 0;i--){
        printf("%d", numbers[i]);
    }
}



void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int *arr, int start, int end) {
    if (start >= end) return;
    int key = start, i = start + 1, j = end, temp;
    while (i <= j) {
        while (i <= end && arr[i] <= arr[key]) i++; 
        while (j > start && arr[j] >= arr[key]) j--;
        
        if (i > j) swap(&arr[key], &arr[j]);
        else swap(&arr[i], &arr[j]);
    }
    quickSort(arr, start, j - 1);
    quickSort(arr, j + 1, end); 
}