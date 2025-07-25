#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, GCD, LCM;
    cin >> a >> b;

    int A(a), B(b);

    while(b!=0){
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    GCD = a;
    LCM = A * B / GCD;

    cout << GCD << ' ' << LCM << '\n';
    return 0;
}