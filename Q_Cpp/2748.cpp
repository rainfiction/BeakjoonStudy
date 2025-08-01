#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long int> fib;

    fib.push_back(0);
    fib.push_back(1);

    for (int i = 2; i <= 90;i++){
        long long int num = fib[i - 2] + fib[i - 1];
        fib.push_back(num);
    }

    int n;
    cin >> n;

    cout << fib[n] << '\n';

    return 0;
}