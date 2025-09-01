#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string line;
    stack<int> s;

    cin >> line;
    int len = line.length();

    for (int i = 0; i < len; i++){
        if(line[i]=='+' || line[i]=='-' || line[i]=='*' || line[i]=='/'){
            int num2 = s.top();
            s.pop();
            int num1 = s.top();
            s.pop();

            if(line[i]=='+')
                s.push(num1 + num2);
            if(line[i]=='-')
                s.push(num1 - num2);
            if(line[i]=='*')
                s.push(num1 * num2);
            if(line[i]=='/')
                s.push(num1 / num2);
        }
        else
            s.push(line[i] - '0');
    }

    cout << s.top() << '\n';

    return 0;
}