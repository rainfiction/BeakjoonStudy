#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, front;
    queue<int> q;
    vector<int> permutation;

    cin >> n >> k;

    for (int i = 1; i <= n;i++){
        q.push(i);
    }

    while(!q.empty()){
        for (int i = 0; i < k - 1;i++){
            front = q.front();
            q.pop();
            q.push(front);
        }

        front = q.front();
        permutation.push_back(front);
        q.pop();
    }

    cout << '<' << permutation[0];
    for (int i = 1; i < n;i++){
        cout << ", " << permutation[i];
    }
    cout << '>' << '\n';
    
    return 0;
}