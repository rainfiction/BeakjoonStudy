#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while(1){
        string sentence;
        stack<char> stk;
        bool YN = true;
        getline(cin, sentence);

        //"." 들어오면 종료
        if(sentence==".")
            break;

        int len = sentence.length();
        for (int i = 0; i < len;i++){
            if(sentence[i]=='(')
                stk.push('(');
            else if(sentence[i]=='[')
                stk.push('[');
            else if (sentence[i] == ')'){
                if(stk.size()!=0 && stk.top()=='(')
                    stk.pop();
                else{
                    YN = false;
                    break;
                }
            }
            else if(sentence[i]==']'){
                if(stk.size()!=0 && stk.top()=='[')
                    stk.pop();
                else{
                    YN = false;
                    break;
                }
            }
        }

        if(stk.size()!=0)
            YN = false;
        if(YN)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }

    return 0;
}