#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t;i++){
        int len;
        stack<char> s;
        string data, testResult("YES");

        cin >> data;
        len = data.length();

        for (int j = 0; j < len;j++){
            if(data[j]=='(')
                s.push('(');
            else if(data[j]==')'){
                if(s.empty()){
                    testResult = "NO";
                    break;
                }
                else if(s.top()=='(')
                    s.pop();
            }
        }

        if(!s.empty())
            testResult = "NO";

        if(testResult == "NO")
            cout << testResult << '\n';
        else if(testResult == "YES")
            cout << "YES" << '\n';
    }

    return 0;
}

/*최적은 아니지만, yes no 로 직접 표시해주면 직관적이고 알아보기 편함.*/