#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, x, y, ball(1);
    cin >> m;

    for (int i = 0; i < m;i++){
        cin >> x >> y;
        if(x==ball)
            ball = y;
        else if(y==ball)
            ball = x;
    }

    cout << ball << '\n';

    return 0;
}