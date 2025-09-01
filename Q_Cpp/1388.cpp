#include <iostream>
#include <vector>
using namespace std;

int n, m;
bool visited[51][51];
vector<string> board;

void dfs(int x, int y);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int count(0);

    cin >> n >> m;
    for (int i = 0; i < n;i++){
        string str;
        cin >> str;

        board.push_back(str);
    }

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(!visited[i][j]){
                dfs(i, j);
                count++;
            }
        }
    }

    cout << count << '\n';
}



void dfs(int x, int y){
    visited[x][y] = 1;

    if(board[x][y]=='-'){
        y++;
        if(y<m && !visited[x][y] && board[x][y] == '-')
            dfs(x, y);
    }
    else{
        x++;
        if(x<n && !visited[x][y] && board[x][y] =='|')
            dfs(x, y);
    }
}