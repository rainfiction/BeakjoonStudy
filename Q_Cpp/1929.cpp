#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;

    cin >> m >> n;
    vector<bool> ans(n+1, 1);

    ans[1] = false;

    for (int i = 2; i <= n ;i++){
        if(ans[i]){
            for (int j = i * 2; j <= n;j+=i){
                ans[j] = false;
            }
        }
    }

    for (int i = m; i <= n;i++){
        if(ans[i]) cout << i << '\n';
    }

    return 0;
}

/*에라토스테네스의 체 활용
이거 안쓰면 시간 초과*/