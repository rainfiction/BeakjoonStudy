#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long int re(2);
    for (int i = 0; i < n;i++){
        re += (1LL << i); //비트 연산
    }
    
    cout << re * re << '\n';

    return 0;
}