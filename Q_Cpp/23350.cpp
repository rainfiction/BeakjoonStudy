#include <iostream>
#include <stack>
#include <deque>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, price(0);
    
    cin >> n >> m;

    int range = m; //현재 적재해야 할 우선순위
    vector<int> v(m + 1);
    stack<pair<int, int>> s;
    deque<pair<int, int>> rail;

    for (int i = 0; i < n;i++){
        int p, w;
        cin >> p >> w;

        v[p]++;
        rail.push_back(make_pair(p, w));
    }

    while(range != 0){
        if(rail.front().first==range){ //가장 낮은 우선순위라면 적재
            if(s.empty() || s.top().second >= rail.front().second || s.top().first != rail.front().first){
                price += rail.front().second;
                s.push(rail.front());
                rail.pop_front();
            }
            else{ //무게에 따른 재배치
                stack<pair<int, int>> lot;
                while(!s.empty() && s.top().second < rail.front().second && s.top().first == rail.front().first){
                    price += s.top().second;
                    lot.push(s.top());
                    s.pop();
                }

                price += rail.front().second;
                s.push(rail.front());
                rail.pop_front();

                while(!lot.empty()){
                    price += lot.top().second;
                    s.push(lot.top());
                    lot.pop();
                }
            }

            v[range]--;
        }
        else{ //최우선순위가 아닌 컨테이너
            price += rail.front().second;
            rail.push_back(rail.front());
            rail.pop_front();
        }

        if(v[range]==0)
            range--;
    }

    cout << price << '\n';

    return 0;
}

/*
적재 관리는 스택
레일은 덱으로 구현

벡터로 각 우선수위를 가지는 컨테이너의 개수 저장
->낮은 우선순위가 전부 적재되면 그 다음 우선순위를 받기 시작함

동작마다 price에 무게를 추가
price 출력
*/