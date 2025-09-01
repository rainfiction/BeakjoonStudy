#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    char order;
    string start;
    stack<char> left;
    stack<char> right;

    cin >> start;
    int len = start.length();

    for (int i = 0; i < len;i++){
        left.push(start[i]);
    }

    cin >> m;

    while(m--){
        cin >> order;

        if(order=='L'){
            if(left.empty())
                continue;
            else{
                right.push(left.top());
                left.pop();
            }
        }
        else if(order=='D'){
            if(right.empty())
                continue;
            else{
                left.push(right.top());
                right.pop();
            }
        }
        else if(order=='B'){
            if(left.empty())
                continue;
            else
                left.pop();
        }
        else if(order=='P'){
            char paste;
            cin >> paste;

            left.push(paste);
        }
    }


    vector<char> result;

    while(!left.empty()){
        result.push_back(left.top());
        left.pop();
    }

    reverse(result.begin(), result.end());

    while(!right.empty()){
        result.push_back(right.top());
        right.pop();
    }

    for(auto &a:result)
        cout << a;

    return 0;
}

/*
커서 기준 왼쪽 스택, 오른쪽 스택에 push pop하면서 문제풀이
정답은 왼+오른 스택 거꾸로 붙여서 출력
1. 그럼 왼쪽 스택을 출력할 때는 뺐다->붙였다 두 번?
    더 간단하게 돌릴 수 있는 방법은?
*/
