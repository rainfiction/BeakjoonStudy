#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, result;
    cin >> a >> b >> c;

    cout << ((c % 2 == 0) ? a : (a ^ b)) << '\n';

    return 0;
}

/*규칙성을 이용함.
0번째: a
1번째: a ^ b
2번째: (a ^ b) ^ b = a
.
.
.
*/