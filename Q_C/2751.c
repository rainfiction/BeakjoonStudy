//퀵 정렬-시간초과!
/*c++로 시간초과 안 내고 풀었음. 근데 이것도 코드가 틀린 건 아니라 참고용으로 두겠음.*/


#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void quickSort(int *arr, int start, int end);



int main(){
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n;i++){
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
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