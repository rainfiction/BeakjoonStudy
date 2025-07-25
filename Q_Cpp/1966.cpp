#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m, tmp(0);
    cin >> t;

    while(tmp<t){
        tmp++;

        int index(0);
        queue<pair<int, int>> q;
        pair<int, bool> p;

        cin >> n >> m;
        //찾고자 하는 수는 pair의 true로 표기
        for (int i = 0; i < n;i++){
            int num;
            cin >> num;
            if (i == m)
                p = make_pair(num, true);
            else
                p = make_pair(num, false);
            q.push(p);
        }

        while(q.size()!=0){
            int size = q.size();
            int front = q.front().first;
            bool print(true);

            for (int i = 0; i < size;i++){
                q.push(q.front());
                q.pop();
                if(front<q.front().first)
                    print = false;
            }

            if(print){ //프린트 가능
                index++;
                if(q.front().second)
                    break;
                q.pop();
            }
            else{ //프린트 불가능
                q.push(q.front());
                q.pop();
            }
        }

        cout << index << '\n';
    }

    return 0;
}

/*
오오
나 좀 똑똑해진듯
*/