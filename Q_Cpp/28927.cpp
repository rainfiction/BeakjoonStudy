#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    int Max, Mel;

    cin >> a >> b >> c;
    Max = a * 3 + b * 20 + c * 120;

    cin >> a >> b >> c;
    Mel = a * 3 + b * 20 + c * 120;

    if(Max==Mel)
        cout << "Draw" << '\n';
    else
        cout << ((Max> Mel)? "Max" : "Mel") << '\n';

    return 0;
}