#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, count(0);
    unordered_set<string> us;

    cin >> n >> m;

    while(n--){
        string str;
        cin >> str;
        us.insert(str);
    }

    while(m--){
        string str;
        cin >> str;

        if(us.find(str)!=us.end())
            count++;
    }

    cout << count << '\n';

    return 0;
}