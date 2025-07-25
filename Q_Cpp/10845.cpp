#include <iostream>
#include <string>
#include <queue>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    queue<int> q;

    cin >> n;
    for (int i = 0; i < n;i++){
        string command;
        cin >> command;

        if(command=="push"){
            int num;
            cin >> num;
            q.push(num);
        }
        else if(command=="pop"){
            if(q.empty()){
                cout << "-1" << '\n';
                continue;
            }
            cout<< q.front() << '\n';
            q.pop();
        }
        else if(command=="size"){
            cout << q.size() << '\n';
        }
        else if(command=="empty"){
            cout << q.empty() << '\n';
        }
        else if(command=="front"){
            if(q.empty()){
                cout << "-1" << '\n';
                continue;
            }
            cout << q.front() << '\n';
        }
        else if(command=="back"){
            if(q.empty()){
                cout << "-1" << '\n';
                continue;
            }
            cout << q.back() << '\n';
        }
    }

    return 0;
}

/*10828이랑 문제가 거의 비슷함.*/