#include <stdio.h>

int main(){
    int tmp, n;
    scanf("%d", &tmp);

    for (int i = 0; i < tmp;i++){
        scanf("%d", &n);
        printf("%d %d\n", n, n);
    }

    return 0;
}