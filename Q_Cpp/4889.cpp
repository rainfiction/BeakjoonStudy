#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int index(0);

    while(1){
        index++;

        int tmp(0);
        string line;
        stack<char> s;

        cin >> line;
        if(line[0]=='-')
            break;

        int stringlen = line.length();
        
        for (int i = 0; i < stringlen; i++){
            if(line[i]=='}' && !s.empty() && s.top()=='{')
                s.pop();
            else
                s.push(line[i]);
        }

        int stacklen = s.size();
        stacklen /= 2;

        for (int i = 0; i < stacklen;i++){
            char a = s.top();
            s.pop();
            char b = s.top();
            s.pop();

            if(a=='{' && b=='}')
                tmp += 2;
            else
                tmp++;
        }

        cout << index << ". " << tmp << '\n';
    }

    return 0;
}

/*
stack 남은 개수 / 2 하면 되지 않을가
-> 아님

))(())(()-> ))((
두개씩 짝지어서 ), (연달아 나오면 try에 2주차, 그 외 1추가?
-> 될 듯?
*/