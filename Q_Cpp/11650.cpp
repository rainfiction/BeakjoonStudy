#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    multiset<pair<int, int>> ms;

    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> a >> b;
        ms.insert({a, b});
    }

    for(auto i:ms){
        cout << i.first << ' ' << i.second << '\n';
    }
    
    return 0;
}