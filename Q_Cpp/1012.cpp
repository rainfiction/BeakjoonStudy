#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int n, m;
bool visited[51][51];
bool farm[51][51];

void dfs(int x, int y){
    visited[x][y] = true;

    int xn = x + 1, xb = x - 1;
    int yn = y + 1, yb = y - 1;

    if(xn<n && !visited[xn][y] && farm[xn][y] == 1)
        dfs(xn, y);
    if(yn<m && !visited[x][yn] && farm[x][yn] == 1)
        dfs(x, yn);
    if(xb>=0 && !visited[xb][y] && farm[xb][y] == 1)
        dfs(xb, y);
    if(yb>=0 && !visited[x][yb] && farm[x][yb] == 1)
        dfs(x, yb);
    
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int k;
        int area(0);

        cin >> m >> n >> k;

        memset(visited, false, sizeof(visited));
        memset(farm, false, sizeof(farm));

        for (int i = 0; i < k;i++){
            int x, y;
            cin >> x >> y;

            farm[y][x] = true;
        }

        for (int i = 0; i < n;i++){
            for (int j = 0; j < m;j++){
                if(!visited[i][j] && farm[i][j] == 1){
                    dfs(i, j);
                    area++;
                }
            }
        }

        cout << area << '\n';
    }

    return 0;
}