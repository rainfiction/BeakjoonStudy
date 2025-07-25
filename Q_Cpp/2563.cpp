#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    int repeat, x, y, black(0);
    char space[100][100] = {};

    cin >> repeat;

    for (int r = 0; r < repeat; r++){
        cin >> x;
        cin >> y;

        for (int i = 0; i < 10;i++){
            for (int j = 0; j < 10;j++){
                if(space[x+i][y+j]!='1')
                    space[x + i][y + j] = '1';
            }
        }
    }

    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 100; j++){
            if(space[i][j]=='1')
                black++;
        }
    }

    cout << black << endl;
}