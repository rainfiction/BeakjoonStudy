#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<int> atk;
    queue<pair<int, pair<int, int>>> q;

    cin >> n;
    for (int i = 0; i < n;i++){
        int attack;
        cin >> attack;
        atk.push_back(attack);
    }
    for (int i = 0; i < n;i++){
        int health;
        cin >> health;
        q.push(make_pair(i + 1, make_pair(atk[i], health)));
    }

    int accumulatedDamage(0); //누적된 피해량
    vector<int> turn(n+1, 0);
    while(q.size() != 1){
        //본인 턴인데 체력이 0보다 작으면 탈락
        if(q.front().second.second - accumulatedDamage + q.front().second.first * turn[q.front().first] <= 0)
            q.pop();
        else{
            accumulatedDamage += q.front().second.first;
            turn[q.front().first]++;
            q.push(q.front());
            q.pop();
        }
    }

    cout << q.front().first << '\n';

    return 0;
}

/*챗지피티 졸라 도움 안돼*/