#include <iostream>
#define BORDSIZE 8
using namespace std;

int main(int argc, char* argv[]){
    int countWhite(0);
    char bord[BORDSIZE][BORDSIZE] = {'\0'};

    for (int i = 0; i < BORDSIZE; i++){
        for (int j = 0; j < BORDSIZE;j++){
            cin >> bord[i][j];
        }
    }

    for (int i = 0; i < BORDSIZE; i++){
        if(i % 2 == 0){
            for (int j = 0; j < BORDSIZE; j += 2){
                if(bord[i][j]=='F'){
                    countWhite++;
                }
            }
        }
        else{
            for (int j = 1; j < BORDSIZE; j += 2){
                if(bord[i][j]=='F'){
                    countWhite++;
                }
            }
        }
    }

    cout << countWhite << endl;

    return 0;
}


/*
for (int i = 0; i < BORDSIZE; i++) {
    for (int j = 0; j < BORDSIZE; j++) {
        if ((i + j) % 2 == 0 && bord[i][j] == 'F') {
            countWhite++;
        }
    }
}
바본가 그냥 이렇게 작성하면 끝인데
ㅋㅋㅋㅋㅋㅋ
*/