#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string command;
    
    cin >> n >> command;

    vector<vector<char>> wood(n, vector<char>(n, '.'));

    int len = command.length();
    int x(0), y(0);
    for (int i = 0; i < len;i++){
        if(command[i]=='U'){
            if(x - 1 < 0) continue;
            if(wood[x][y]=='-')
                wood[x][y] = '+';
            else if (wood[x][y]=='.') wood[x][y] = '|';
            x--;
            if(wood[x][y]=='-')
                wood[x][y] = '+';
            else if (wood[x][y]=='.') wood[x][y] = '|';
        }
        else if(command[i]=='D'){
            if(x + 1 >= n) continue;
            if(wood[x][y]=='-')
                wood[x][y] = '+';
            else if (wood[x][y]=='.') wood[x][y] = '|';
            x++;
            if(wood[x][y]=='-')
                wood[x][y] = '+';
            else if (wood[x][y]=='.') wood[x][y] = '|';
        }
        else if(command[i]=='L'){
            if(y - 1 < 0) continue;
            if(wood[x][y]=='|')
                wood[x][y] = '+';
            else if (wood[x][y]=='.') wood[x][y] = '-';
            y--;
            if(wood[x][y]=='|')
                wood[x][y] = '+';
            else if (wood[x][y]=='.') wood[x][y] = '-';
        }
        else if(command[i]=='R'){
            if(y + 1 >= n) continue;
            if(wood[x][y]=='|')
                wood[x][y] = '+';
            else if (wood[x][y]=='.') wood[x][y] = '-';
            y++;
            if(wood[x][y]=='|')
                wood[x][y] = '+';
            else if (wood[x][y]=='.') wood[x][y] = '-';
        }
    }

    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cout << wood[i][j];
        }
        cout << '\n';
    }

    return 0;
}

/*원래 이렇게 무식하게 하면 안되는데 ctrlCV가 너무 편해서 그만...
그 만들고 다시 수정하는거 너무 귀찮아서...ㅎㅎㅎ*/