#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    double w, h, result;
    
    cin >> w;
    cin >> h;

    result = w * h / 2;

    cout << fixed;
    cout.precision(1);

    cout << result << endl;
    return 0;
}