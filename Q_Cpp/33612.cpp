#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if(n==1){
        cout << 2024 << ' ' << 8 << '\n';
    }
    else if(n==2){
        cout << 2025 << ' ' << 3 << '\n';
    }
    else if(n==3){
        cout << 2025 << ' ' << 10 << '\n';
    }
    else if(n==4){
        cout << 2026 << ' ' << 5 << '\n';
    }
    else if(n==5){
        cout << 2026 << ' ' << 12 << '\n';
    }

    return 0;
}