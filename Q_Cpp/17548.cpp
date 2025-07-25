#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    int eCount;
    string hey;

    cin >> hey;

    eCount = (hey.length() - 2) * 2;

    cout << "h";
    for (int i = 0; i < eCount ;i++){
        cout << "e";
    }
    cout << "y" << endl;

    return 0;
}