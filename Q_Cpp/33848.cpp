#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q, order;
    stack<pair<int, char>> version;
    stack<int> s;

    cin >> q;

    while(q--){
        cin >> order;

        if(order==1){
            int num;
            cin >> num;

            version.push(make_pair(num, '+'));
            s.push(num);
        }
        else if(order==2){
            version.push(make_pair(s.top(), '-'));
            s.pop();
        }
        else if(order==3){
            int j;
            cin >> j;

            for (int i = 0; i < j;i++){
                if(version.top().second=='+'){
                    s.pop();
                    version.pop();
                }
                else if(version.top().second=='-'){
                    s.push(version.top().first);
                    version.pop();
                }
            }
        }
        else if(order==4)
            cout << s.size() << '\n';
        else if(order==5){
            if(s.empty())
                cout << -1 << '\n';
            else
                cout << s.top() << '\n';
        }
    }

    return 0;
}