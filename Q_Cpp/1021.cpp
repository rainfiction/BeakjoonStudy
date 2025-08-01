#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, count(0);
    deque<int> deq;

    cin >> n >> m;
    
    for (int i = 1; i <= n;i++){
        deq.push_back(i);
    }

    while(m--){
        int num;
        cin >> num;

        int index = find(deq.begin(), deq.end(), num) - deq.begin();
        if(index<=deq.size()/2){ //앞에서부터 빼는 경우
            while(deq.front()!=num){
                count++;
                deq.push_back(deq.front());
                deq.pop_front();
            }
        }
        else{ //뒤에서부터 빼는 경우
            while(deq.front()!=num){
                count++;
                deq.push_front(deq.back());
                deq.pop_back();
            }
        }

        deq.pop_front();
    }

    cout << count << '\n';

    return 0;
}