#include <stdio.h>

int main(){
    int n;
    char label[30] = "WelcomeToSMUPC";

    scanf("%d", &n);
    printf("%c", label[(n - 1)%14]);

    return 0;
}