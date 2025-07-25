#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int l;
    long long int result(0), power(1);
    string word;

    cin >> l >> word;

    for (int i = 0; i < l;i++){
        result = (result + ((word[i] - 96) * power) % 1234567891) % 1234567891;
        power = (power * 31) % 1234567891;
    }

    cout << result << '\n';

    return 0;
}

/*pow함수가 은근히 쓸모가 없음... 정밀도가 떨어져서 문제풀이에 쓸 수가 없다*/