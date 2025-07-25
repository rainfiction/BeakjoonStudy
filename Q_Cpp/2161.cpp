#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    queue<int> q;
    vector<int> vec;

    cin >> n;

    for (int i = 1; i <= n;i++){
        q.push(i);
    }

    while(!q.empty()){
        vec.push_back(q.front());
        q.pop();

        if(q.empty())
            break;

        q.push(q.front());
        q.pop();
    }

    for(auto& a:vec){
        cout << a << ' ';
    }

    return 0;
}