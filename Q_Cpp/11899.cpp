#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<char> s;
    string line;

    cin >> line;
    int len = line.length();

    for (int i = 0; i < len;i++){
        if(!s.empty() && line[i]==')' && s.top() == '(')
            s.pop();
        else
            s.push(line[i]);
    }

    cout << s.size() << '\n';

    return 0;
}