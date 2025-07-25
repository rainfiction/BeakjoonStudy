#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    int a, b, c, d, num;
    int workers[3] = {0};

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> workers[0];
    cin >> workers[1];
    cin >> workers[2];

    for(auto time : workers){
        int attack(0);
        num = time % (a + b);
        if(num<=a && num!=0)
            attack++;

        num = time % (c + d);
        if(num<=c && num!=0)
            attack++;

        cout << attack << endl;
    }

    return 0;
}