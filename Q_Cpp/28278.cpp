#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, order;
    stack<int> s;

    cin >> n;

    while(n--){
        cin >> order;

        if(order == 1){
            int num;
            cin >> num;
            s.push(num);
        }
        else if(order == 2){
            if(s.empty())
                cout << -1 << '\n';
            else {
                cout << s.top() << '\n';
                s.pop();
            }
        }
        else if(order == 3)
            cout << s.size() << '\n';
        else if(order == 4){
            if(s.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if(order == 5){
            if(s.empty())
                cout << -1 << '\n';
            else
                cout << s.top() << '\n';
        }
    }

    return 0;
}