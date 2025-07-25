#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> dp(n + 1);
    dp[1] = 0;

    for (int i = 2; i <= n;i++){
        dp[i] = dp[i - 1] + 1;

        if(i%2==0)
            dp[i] = min(dp[i], dp[i / 2] + 1);
        if(i%3==0)
            dp[i] = min(dp[i], dp[i / 3] + 1);
    }

    cout << dp[n] << '\n';

    return 0;
}


/*수학적 규칙성이 없어서 연산으로 풀 수 없음.
대신 특정 수 n에게 도달하기까지의 최소 연산 수는 항상 같다는 것을 이용해 수의 연산 값을 저장해서 필요한 것을 꺼내 오는 방법을 사용.

예를 들어 10까지의 최소 연산 횟수가 3이면,
20은 그에 /2 연산을 추가로 한번만 더 한 4이다.(10이 나눠지는 경로는 항상 동일)*/

/*다이나믹 프로그래밍*/