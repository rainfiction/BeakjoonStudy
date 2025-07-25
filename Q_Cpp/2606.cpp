#include <iostream>
#include <vector>
using namespace std;

vector<int> parent(101);

int find(int x){
    if(x==parent[x])
        return x;
    return parent[x] = find(parent[x]);
}

void Union(int x, int y){
    x = find(x);
    y = find(y);

    if(x == y)
        return;

    if(x<y)
        parent[y] = x;
    else
        parent[x] = y;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, count(0);
    cin >> n >> m;

    for (int i = 1; i <= n;i++){
        parent[i] = i;
    }

    for (int i = 0; i < m;i++){
        int x, y;
        cin >> x >> y;
        Union(x, y);
    }

    for (int i = 1; i <= n;i++){
        if(find(i)==find(1))
            count++;
    }

    cout << count - 1 << '\n';

    return 0;
}