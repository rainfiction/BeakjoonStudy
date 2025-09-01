#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    unordered_set<int> us;

    cin >> n;
    while(n--){
        int num;
        cin >> num;

        us.insert(num);
    }

    cin >> m;
    while(m--){
        int num;
        cin >> num;

        if(us.find(num)!=us.end())
            cout << "1" << ' ';
        else
            cout << "0" << ' ';
    }

    return 0;
}