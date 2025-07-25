#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, count(0);
    cin >> n >> k;

    vector<int> coin;

    for (int i = 0; i < n;i++){
        int price;
        cin >> price;
        if(price<=k){
            coin.push_back(price);
        }
    }

    int i = coin.size();
    while (k!=0){
        i--;
        if(k>=coin[i]){
            int c = k / coin[i];
            count += c;
            k -= c * coin[i];
        }
    }

    cout << count << '\n';
    
    return 0;
}

/*동전의 가치가 k보다 크면 저장을 하지 않음.
그냥 10개 넣어서 10번 무식하게 검사하는 게 더 빠를까, 아니면 이걸 걸러내느냐 if문을 최대 10번 돌리는 게 너 빠를까

숫자 연산은 코스트가 크다. cpu입장에서 if문을 돌리는 것보다 연산을 더 부담스러워함.

아니 챗지피티 이시키 계속 이상한 말만 해요*/