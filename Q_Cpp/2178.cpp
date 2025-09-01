#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<int>> length(n, vector<int>(m, 0));
    vector<string> maze;
    queue<pair<int, int>> q;

    for (int i = 0; i < n;i++){
        string str;
        cin >> str;
        maze.push_back(str);
    }

    q.push(make_pair(0, 0));
    visited[0][0] = true;
    length[0][0] = 1;

    while(!q.empty()){
        int x, y;

        if(q.front().second!=m-1 && maze[q.front().first][q.front().second+1]=='1' && !visited[q.front().first][q.front().second+1]){//오른
            x = q.front().first;
            y = q.front().second + 1;
            q.push(make_pair(x, y));
            visited[x][y] = true;
            length[x][y] = length[q.front().first][q.front().second] + 1;
        }
        if(q.front().first!=n-1 && maze[q.front().first+1][q.front().second]=='1' && !visited[q.front().first+1][q.front().second]){//아래
            x = q.front().first + 1;
            y = q.front().second;
            q.push(make_pair(x, y));
            visited[x][y] = true;
            length[x][y] = length[q.front().first][q.front().second] + 1;
        }
        if(q.front().second!=0 && maze[q.front().first][q.front().second-1]=='1' && !visited[q.front().first][q.front().second-1]){ //왼
            x = q.front().first;
            y = q.front().second - 1;
            q.push(make_pair(x, y));
            visited[x][y] = true;
            length[x][y] = length[q.front().first][q.front().second] + 1;
        }
        if(q.front().first!=0 && maze[q.front().first-1][q.front().second]=='1' && !visited[q.front().first-1][q.front().second]){ //위
            x = q.front().first - 1;
            y = q.front().second;
            q.push(make_pair(x, y));
            visited[x][y] = true;
            length[x][y] = length[q.front().first][q.front().second] + 1;
        }

        q.pop();
        if(visited[n-1][m-1])
            break;
    }

    cout << length[n - 1][m - 1] << '\n';

    return 0;
}