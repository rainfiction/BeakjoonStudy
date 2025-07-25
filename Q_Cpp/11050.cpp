#include <iostream>
using namespace std;


int factorial(int a){
    int result(1);
    for (int i = 2; i < a+1;i++){
        result *= i;
    }
    return result;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    cout << factorial(n) / (factorial(k) * factorial(n - k)) << '\n';

    return 0;
}