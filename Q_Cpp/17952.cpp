#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, total(0);
    stack<pair<int, int>> s;
    
    cin >> n;

    while(n--){
        int order;
        cin >> order;

        if(order==1){
            int a, t;
            cin >> a >> t;
            s.push(make_pair(t, a));
        }

        if(s.empty())
            continue;
        else
            s.top().first--;

        if(s.top().first==0){
            total += s.top().second;
            s.pop();
        }
    }

    cout << total << '\n';

    return 0;
}
//first에 시간을, second에 점수를 저장