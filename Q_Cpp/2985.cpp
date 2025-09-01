#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    if(a+b==c){
        cout << a << "+" << b << "=" << c << '\n';
    }
    else if(b+c==a){
        cout << a << "=" << b << "+" << c << '\n';
    }
    else if(a-b==c){
        cout << a << "-" << b << "=" << c << '\n';
    }
    else if(b-c==a){
        cout << a << "=" << b << "-" << c << '\n';
    }
    else if(a*b==c){
        cout << a << "*" << b << "=" << c << '\n';
    }
    else if(b*c==a){
        cout << a << "=" << b << "*" << c << '\n';
    }
    else if(a/b==c){
        cout << a << "/" << b << "=" << c << '\n';
    }
    else if(b/c==a){
        cout << a << "=" << b << "/" << c << '\n';
    }

    return 0;
}