#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, sum(0);
    stack<int> s;

    cin >> k;

    for (int i = 0; i < k;i++){
        int num;
        cin >> num;

        if(num==0)
            s.pop();
        else
            s.push(num);
    }

    while(!s.empty()){
        int num = s.top();
        sum += num;
        s.pop();
    }

    cout << sum << '\n';

    return 0;
}