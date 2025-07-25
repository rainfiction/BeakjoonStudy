#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    queue<int> q;

    cin >> n;
    for (int i = 1; i <= n;i++){
        q.push(i);
    }

    int tmp;
    while(q.size()!=1){
        q.pop();
        if(q.size()!=1){
            tmp = q.front();
            q.pop();
            q.push(tmp);
        }
    }

    cout << q.front() << '\n';
    
    return 0;
}



/*큐를 수동으로 구현해야 한다면 그만큼 복잡한 것도 없겠지만... 큐가 헤더 파일로 제공되는 이상 사실 실버4가 무색할 정도로 쉬운 문제다*/