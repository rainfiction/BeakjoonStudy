#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a(0), b(0), c(0);
    
    cin >> t;

    while(1){
        if(t/300>0){
            a += t / 300;
            t %= 300;
        }
        else if(t/60>0){
            b += t / 60;
            t %= 60;
        }
        else if(t/10>0){
            c += t / 10;
            t %= 10;
        }

        if(t==0)
            break;
        else if(t<10){
            cout << -1 << '\n';
            return 0;
        }
    }

    cout << a << ' ' << b << ' ' << c << '\n';

    return 0;
}