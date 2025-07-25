#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    set<string> list;

    cin >> n >> m;

    for (int i = 0; i < n;i++){
        string name;
        cin >> name;
        list.insert(name);
    }
    set<string> Llist = list;

    for (int i = 0; i < m;i++){
        string name;
        cin >> name;
        list.erase(name);
    }

    while (!list.empty()){
        Llist.erase(*list.begin());
        list.erase(*list.begin());
    }

        cout << Llist.size() << '\n';
    for(auto &a:Llist)
        cout << a << '\n';

    return 0;
}