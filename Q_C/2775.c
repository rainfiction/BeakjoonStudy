#include <stdio.h>

int main(){
    int apt[15][14] = {0};

    for (int i = 0; i < 14;i++){
        apt[0][i] = i + 1;
    }

    for (int i = 1; i < 15;i++){
        for (int j = 0; j < 14;j++){
            int sum = 0;
            for (int p = 0; p < j+1;p++){
                sum += apt[i-1][p];
            }
            apt[i][j] = sum;
        }
    }

    int t, k, n;
    scanf("%d", &t);
    for (int i = 0; i < t;i++){
        scanf("%d %d", &k, &n);
        printf("%d\n", apt[k][n-1]);
    }

    return 0;
}