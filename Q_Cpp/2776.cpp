#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m;
    cin >> t;

    while(t--){
        unordered_set <int> uset;
        
        cin >> n;
        for (int i = 0; i < n;i++){
            int number;
            cin >> number;
            uset.insert(number);
        }

        cin >> m;
        for (int i = 0; i < m;i++){
            int number;
            cin >> number;
            if(uset.find(number)!=uset.end())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
    }

    return 0;
}