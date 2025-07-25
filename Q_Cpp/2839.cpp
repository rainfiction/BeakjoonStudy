#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, bag5, bag3, used, unused;
    cin >> n;

    bag5 = n / 5;
    while(1){
        used = 5 * bag5;
        unused = n - used;

        if(bag5<0){
            cout << -1 << '\n';
            return 0;
        }
        
        if(unused%3==0){
            bag3 = unused / 3;
            break;
        }
        else
            bag5--;
    }

    cout << bag5 + bag3 << '\n';

    return 0;
}

/*헷갈려헷갈려
난 수학이 싫단 말이다*/