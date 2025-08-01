#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        if(a==1){
            cout << 1 << '\n';
            continue;
        }

        int result(1);
        for (int i = 0; i < b;i++){
            result *= a;
            result %= 10;
        }

        if(!result)
            cout << 10 << '\n';
        else
            cout << result << '\n';
    }

    return 0;
}