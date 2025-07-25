#include <iostream>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    map<string, string> list;
    cin >> n >> m;

    for (int i = 0; i < n;i++){
        string site, password;
        cin >> site >> password;
        list.insert(make_pair(site, password));
    }

    for (int i = 0; i < m;i++){
        string site;
        cin >> site;
        cout << list[site] << '\n';
    }

    return 0;
}