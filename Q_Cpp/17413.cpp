#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string line;
    vector<char> v;
    stack<char> s;

    getline(cin, line);
    int len = line.length();

    for (int i = 0; i < len;i++){
        if(line[i]=='<'){
            if(!s.empty()){ //< 집입 전 문자열이 있다면
                while(!s.empty()){
                    v.push_back(s.top());
                    s.pop();
                }
            }
            //아니면
            while(line[i]!='>'){
                v.push_back(line[i]);
                i++;
            }
            v.push_back('>');
        }
        else if (line[i]==' '){
            while(!s.empty()){
                    v.push_back(s.top());
                    s.pop();
            }
            v.push_back(' ');
        }
        else s.push(line[i]);
    }

    if(!s.empty()){
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
    }

    for(auto &a:v)
        cout << a;
    return 0;
}