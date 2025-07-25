#include <stdio.h>
#include <string.h>

int main(){
    char word[100] = {'\0'};
    int isPellindrom=1;

    scanf("%s", word);
    int len = strlen(word);
    for (int i = 0; i <= len / 2; i++){
        if(word[i]!=word[len-1-i]){
            isPellindrom = 0;
            break;
        }
    }
    printf("%d", isPellindrom);
    return 0;
}