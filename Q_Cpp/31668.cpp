#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    int n, m, k, result;
    cin >> n;
    cin >> m;
    cin >> k;

    result = m / n * k;
    cout << result;
    
    return 0;
}