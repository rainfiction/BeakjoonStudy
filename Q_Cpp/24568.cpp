#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int r, s;

    cin >> r >> s;

    int total = r * 8 + s * 3;

    if(total<28)
        cout << 0 << '\n';
    else
        cout << total - 28 << '\n';

    return 0;
}