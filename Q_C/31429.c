#include <stdio.h>

int suapcQ[11] = {12, 11, 11, 10, 9, 9, 9, 8, 7, 6, 6};
int suapcMin[11] = {1600, 894, 1327, 1311, 1004, 1178, 1357, 837, 1055, 556, 773};

int main(){
    int n;
    scanf("%d", &n);
    printf("%d %d\n", suapcQ[n - 1], suapcMin[n - 1]);

    return 0;
}