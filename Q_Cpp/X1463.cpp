#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, tmp(0);
    cin >> x;

    while(x!=1){
        tmp++;
        if(x%2==0&&x%3!=0&&(x-1)%3==0)//??
            x--;
        else if(x%3==0)
            x /= 3;
        else if(x%2==0)
            x /= 2;
        else
            x--;
    }

    cout << tmp << '\n';

    return 0;
}