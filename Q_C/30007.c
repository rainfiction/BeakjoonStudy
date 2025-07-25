#include <stdio.h>

int main(){
    int n, tmp=0;

    scanf("%d", &n);

    while (tmp<n)
    {
        int a, b, x, w;
        scanf("%d %d %d", &a, &b, &x);
        w = a * (x - 1) + b;
        printf("%d\n", w);
        tmp++;
    }

    return 0;
}