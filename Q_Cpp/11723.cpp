#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, num;
    string command;
    cin >> m;

    bitset<20> bit;

    for (int i = 0; i < m;i++){
        cin >> command;

        if(command == "add"){ //0이면 1로 바꿈
            cin >> num;
            bit.set(num - 1);
        }
        else if(command == "remove"){ 
            cin >> num;
            bit.reset(num - 1);
        }
        else if(command == "check"){
            cin >> num;
            cout << bit.test(num - 1) << '\n';
        }
        else if(command == "toggle"){
            cin >> num;
            bit.flip(num - 1);
        }
        else if(command == "all"){
            bit.set();
        }
        else if(command == "empty"){
            bit.reset();
        }
    }

    return 0;
}