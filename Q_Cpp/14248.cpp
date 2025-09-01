#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s, count(0);
    vector<int> bridge;
    queue<pair<int, int>> q; //값, index

    cin >> n;
    vector<bool> visited(n, false);

    for (int i = 0; i < n;i++){
        int num;
        cin >> num;
        bridge.push_back(num);
    }

    cin >> s;
    q.push(make_pair(bridge[s - 1], s-1));

    while(!q.empty()){
        visited[q.front().second] = true;
        count++;

        int nextback = q.front().second - q.front().first;
        int nextforth = q.front().second + q.front().first;

        if(nextback >= 0 && !visited[nextback])
            q.push(make_pair(bridge[nextback], nextback));
        if(nextforth < n && !visited[nextforth])
            q.push(make_pair(bridge[nextforth], nextforth));

        q.pop();
    }

    cout << count << '\n';

    return 0;
}