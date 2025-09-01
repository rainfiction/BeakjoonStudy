#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    unordered_set<string> us;

    cin >> n;

    for (int i = 0; i < n;i++){
        string str;
        cin >> str;

        us.insert(str);

        reverse(str.begin(), str.end());
        if(us.count(str)){
            int len = str.length();

            cout << len << ' ';
            cout << str[len / 2] << '\n';
        }
    }

    return 0;
}