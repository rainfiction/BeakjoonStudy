#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, index(0), pushNum(1);
    vector<int> vec;
    vector<char> command;
    stack<int> s;

    cin >> n;
    for (int i = 0; i < n;i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }

    while (index!=n){
        if(!s.empty() && s.top()==vec[index]){
            s.pop();
            command.push_back('-');
            index++;
        }
        else if(pushNum<=n){
            s.push(pushNum);
            command.push_back('+');
            pushNum++;
        }
        else{
            cout << "NO" << '\n';
            return 0;
        }
    }

    for(auto a:command)
        cout << a << '\n';

    return 0;
}