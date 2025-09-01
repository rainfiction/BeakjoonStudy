#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    unordered_set<string> us;
    vector<string> v;

    cin >> n;
    for (int i = 0; i < n;i++){
        string name, act;
        cin >> name >> act;

        if(act=="enter")
            us.insert(name);
        else if(act=="leave"){
            us.erase(name);
        }
    }

    for(auto &a:us){
        v.push_back(a);
    }

    sort(v.begin(), v.end(), greater<string>());
    for(auto &a:v)
        cout << a << '\n';

    return 0;
}