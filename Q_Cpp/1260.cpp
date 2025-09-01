#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n;

vector<vector<bool>> graph;

vector<bool> dfs_visited;
vector<bool> bfs_visited;



void dfs(int v){
    dfs_visited[v] = true;

    cout << v << ' ';

    for (int i = 1; i <= n;i++){
        if(graph[v][i] == 1 && !dfs_visited[i])
            dfs(i);
    }
}



void bfs(int v){
    queue<int> q;
    q.push(v);
    bfs_visited[v] = true;

    while(!q.empty()){
        cout << q.front() << ' ';

        for (int i = 1; i <= n;i++){
            if(graph[q.front()][i] == 1 && !bfs_visited[i]){
                q.push(i);
                bfs_visited[i] = true;
            }
        }

        q.pop();
    }
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, v;
    cin >> n >> m >> v;

    graph.assign(n + 1, vector<bool>(n + 1, false));

    dfs_visited.assign(n + 1, false);
    bfs_visited.assign(n + 1, false);

    for (int i = 0; i < m;i++){
        int x, y;
        cin >> x >> y;

        graph[x][y] = true;
        graph[y][x] = true;
    }

    //1. dfs
    dfs(v);
    cout << '\n';

    //2. bfs
    bfs(v);
    cout << '\n';

    return 0;
}