#include <iostream>
#include <queue>
using namespace std;

struct Compare{
    bool operator()(pair<int, bool> a, pair<int, bool> b){
        if(a.first==b.first)
            return a.second > b.second;
        return a.first > b.first;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    priority_queue<pair<int, bool>, vector<pair<int, bool>>, Compare> pq;

    //true면 양수
    //false면 음수일 예정

    cin >> n;

    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        
        if(x==0){
            if(pq.empty())
                cout << 0 << '\n';
            else{
                if(pq.top().second){
                    cout << pq.top().first << '\n';
                    pq.pop();
                }
                else{
                    cout << -pq.top().first << '\n';
                    pq.pop();
                }
            }
        }
        else{
            if(x<0)
                pq.push(make_pair(-x, false));
            else
                pq.push(make_pair(x, true));
        }
    }

    return 0;
}

/*챗지피티 사가지 없는 거 내거 고쳐달랬더니 조금 고쳐도 될 걸 싹 다 뜯어고치게 종용하네
역시 믿으면 안됨ㅇㅇ*/