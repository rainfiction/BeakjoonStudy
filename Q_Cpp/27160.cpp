#include <iostream>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    map<string, int> m;

    cin >> n;

    for (int i = 0; i < n;i++){
        int num;
        string fruit;
        cin >> fruit >> num;

        m[fruit] += num;
    }

    for (auto &[s,i]:m){
        if(i==5){
            cout << "YES" << '\n';
            return 0;
        }
    }
    cout << "NO" << '\n';

    return 0;
}