#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    unordered_set<string> us;

    cin >> n;

    for (int i = 0; i < n;i++){
        string name;
        cin >> name;
        us.insert(name);
    }

    n--;
    for (int i = 0; i < n;i++){
        string name;
        cin >> name;

        if(us.count(name))
            us.erase(name);
    }

    for(auto &a:us)
        cout << a << '\n';

    return 0;
}

//단순 존재 여부만 판단할 때는 unsorted_set에 count()로 찾는 것이 가장 빠름