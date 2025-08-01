#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, start;
    queue<int> q;
    cin >> n >> k;

    for (int i = 1; i <= n;i++){
        q.push(i);
    }

    while(q.size() != 1){
        start = q.front();
        for (int i = 0; i < k;i++){
            if(q.front() == start){
                q.push(q.front());
                q.pop();
            }
            else
                q.pop();
        }
    }

    cout << q.front() << '\n';

    return 0;
}