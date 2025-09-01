#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<int> fib = {0, 1};

    for (int i = 2; i <= 20; i++){
        int num = fib[i - 2] + fib[i - 1];
        fib.push_back(num);
    }

    cin >> n;
    cout << fib[n] << '\n';

    return 0;
}