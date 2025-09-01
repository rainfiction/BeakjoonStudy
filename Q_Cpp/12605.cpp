#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;
    cin.ignore();

    for (int i = 1; i <= n;i++){
        string line, word;
        stack<string> s;

        getline(cin, line);
        istringstream iss(line);
        
        while(iss>>word)
            s.push(word);

        cout << "Case #" << i << ':' << ' ';
        while(!s.empty()){
            cout << s.top() << ' ';
            s.pop();
        }
        cout << '\n';
    }

    return 0;
}