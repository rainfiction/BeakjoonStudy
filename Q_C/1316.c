#include <stdio.h>
#include <string.h>

int main(){
    int n, count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n;i++){ //1회의 입력
        char word[101]={'\0'}, letter[101]={'\0'};
        scanf("%s", word);

        int wordlen = strlen(word);
        int isit = 1;

        for (int j = 0; j < wordlen; j++){ //한글자씩 검사
            int letterlen = strlen(letter);
            for (int p = 0; p < letterlen; p++){ //앞서 나온 단어?
                if (word[j] == letter[p]){ //앞서 나왔음
                    isit = 0;
                    break;
                }
            }
            letter[letterlen] = word[j]; //나오지 않았다면 저장
            while(1){
                if(word[j]==word[j+1]){
                    j++;
                }
                else break;
            }
        }
        if(isit==1)
            count++;
    }
    printf("%d", count);
    return 0;
}