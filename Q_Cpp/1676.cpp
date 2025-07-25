#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, div(5), countZero(0);
    cin >> n;

    while(n>=div){
        countZero += (n / div);
        div *= 5;
    }

    cout << countZero << '\n';

    return 0;
}


/*
✅ 핵심 아이디어
N!의 끝에 붙는 0의 개수는 곱셈 과정에서 생기는 10 = 2 × 5의 개수에 따라 결정됩니다.
2는 거의 모든 짝수마다 나오기 때문에 충분히 많음
따라서 5가 몇 번 곱해지는지만 세면 끝자리 0의 개수를 알 수 있습니다.


✅ 구체적으로는 5, 25, 125 등 중복 포함해 모두 세야 함
예: N = 100일 때
100 / 5 = 20 → 5의 배수 (5, 10, 15, ..., 100)
100 / 25 = 4 → 25의 배수 (25, 50, 75, 100 → 각각 5 × 5)
100 / 125 = 0 → 무시
총 24개 → 0이 24개
*/

/*아래는 1차 시도의 흔적. 500!이 unsigned long long double로도 안 들어가는 어마무시한 숫자라 불가능함
이런 건 처음부터 수 범위를 생각하고 진짜 정수 계산할 생각을 버렸어야 함.*/




// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;
//     if(n==0){
//         cout << 0 << '\n';
//         return 0;
//     }

//     int resultNum(1), len, countZero(0);
//     for (int i = 1; i <= n;i++)
//         resultNum *= i;

//     string resultString = to_string(resultNum);
//     len = resultString.length();

//     for (int i = len - 1; i >= 0;i--){
//         if(resultString[i]!='0')
//             break;
//         if(resultString[i]=='0')
//             countZero++;
//     }

//     cout << countZero << '\n';

//     return 0;
// }