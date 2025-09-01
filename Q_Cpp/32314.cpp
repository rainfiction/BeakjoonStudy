#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    if(a<=b/c)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';

    return 0;
}