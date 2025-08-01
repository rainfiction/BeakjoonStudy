#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    string command;
    deque<int> deq;

    cin >> n;

    while(n--){
        cin >> command;

        if(command=="1"){
            cin >> num;
            deq.push_front(num);
        }
        else if(command =="2"){
            cin>>num;
            deq.push_back(num);
        }
        else if(command=="3"){
            if(deq.empty()){
                cout << -1 << '\n';
                continue;
            }
            cout << deq.front() << '\n';
            deq.pop_front();
        }
        else if(command=="4"){
            if(deq.empty()){
                cout << -1 << '\n';
                continue;
            }
            cout << deq.back() << '\n';
            deq.pop_back();
        }
        else if(command =="5"){
            cout << deq.size() << '\n';
        }
        else if(command =="6"){
            cout << deq.empty() << '\n';
        }
        else if(command == "7"){
            if(deq.empty())
                cout << -1 << '\n';
            else
                cout << deq.front() << '\n';
        }
        else if(command == "8"){
            if(deq.empty())
                cout << -1 << '\n';
            else
                cout << deq.back() << '\n';
        }
    }

    return 0;
}