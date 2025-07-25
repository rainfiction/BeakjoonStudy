/*
바구니 수/시행 횟수
1 2 3 4 5 (기존)
2 1 3 4 5
2 1 4 3 5
3 4 1 2 5
3 4 2 1 5
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    
    int *p = (int *)malloc(n * sizeof(int));
    for (int loop = 0; loop < n; loop++){
        p[loop] = loop + 1;
    }

    for (int loop = 0; loop < m; loop++){
        scanf("%d %d", &i, &j);
        for (int s = 0; s <= (j - i) / 2; s++){
            int tmp = p[i + s - 1];
            p[i + s - 1] = p[j - s - 1];
            p[j - s - 1] = tmp;
        }
    }

    for (int print = 0; print < n; print++){
        printf("%d ", p[print]);
    }

    free(p);
    return 0;
}