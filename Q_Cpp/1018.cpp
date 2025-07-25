#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> arr(n, vector<char>(m));

    //체스판 입력받음
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> arr[i][j];
        }
    }

    int start(0), y(0), min(64);
    while(1){
        int paint(0);
        if(start + 7 == m){
            start = 0;
            y++;
        }
        if(y+7==n)
            break;
        
        for (int i = y; i < y + 8;i++){
            for (int j = start; j < start + 8; j++){
                if ((i + j) % 2 == 0) {
                    if (arr[i][j] != 'W') paint++;
                }
                else {
                    if (arr[i][j] != 'B') paint++;
                }
            }
        }
        start++;

        if(64-paint<paint)
            paint = 64 - paint;
        if(paint<min)
            min = paint;
    }

    cout << min << '\n';
    return 0;
}

/*브루트포스 알고리즘==노가다 알고리즘*/
/*(i+j)합이 짝수면 시작색(W)여야, 홀수면 반대색(B)여야 함*/
/*W시작과 B시작 paint수 차이는 64-(어느 한 패턴의 paint수) 임.*/