#include <iostream>
#include <deque>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, order;
    deque<char> result;
    stack<pair<char, char>> version;

    cin >> n;

    while(n--){
        cin >> order;

        if(order==1){
            char paste;
            cin >> paste;

            result.push_back(paste);
            version.push(make_pair(paste, 'f'));
        }
        else if(order==2){
            char paste;
            cin >> paste;

            result.push_front(paste);
            version.push(make_pair(paste, 's'));
        }
        else if(order==3){
            if(result.empty())
                continue;

            if(version.top().second=='s'){
                result.pop_front();
                version.pop();
            }
            else if(version.top().second=='f'){
                result.pop_back();
                version.pop();
            }
        }
    }

    if(result.empty())
        cout << 0 << '\n';
    else{
        for(auto& a : result)
            cout << a;
    }

    return 0;
}

/*
버전관리를 큐로, 실 문자열은 덱으로 관리
s=start, f=finish
*/