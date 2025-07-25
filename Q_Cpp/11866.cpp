#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, rate(0), num;
    vector<int> permutation;
    vector<int> tmp;

    cin >> n >> k;

    for (int i = 0; i < n;i++){
        tmp.push_back(i + 1);
    }

    while (permutation.size()!=n){
        queue<int> q;

        int big = tmp.size();
        for (int i = 0; i < big;i++){
            q.push(tmp[i]);
        }
        tmp.clear();

        for (int i = 0; i < big;i++){
            num = q.front();
            if(rate==k-1){
                permutation.push_back(num);
                q.pop();
                rate = 0;
            }
            else{
                tmp.push_back(num);
                q.pop();
                rate++;
            }
        }

        if(tmp.size()==1)
            permutation.push_back(tmp[0]);
    }

    cout << '<' << permutation[0];
    for (int i = 1; i < n;i++){
        cout << ", " << permutation[i];
    }
    cout << '>' << '\n';

    return 0;
}

/*비효율적임.
q.push(q.front()); 처럼 pop한 값을 바로 push해주면 큐와 vector을 사용해 이중으로 복붙할 필요가 없어진다.

그래도 직접 고안해 냈다는 점에서 뿌듯하긴 하네...
솔직히 시간 초과될 줄 알았다.*/