#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    pair<int, int> p;
    vector<pair<int, int>> vec;

    cin >> n;

    for (int i = 0; i < n;i++){
        int x, y;
        cin >> x >> y;
        p = make_pair(x, y);
        vec.push_back(p);
    }

    sort(vec.begin(), vec.end(), [](const pair<int, int> &a, const pair<int, int> &b)
        {
        if(a.second==b.second)
            return a.first < b.first;
        return a.second < b.second; });

    for (int i = 0; i < n;i++){
        cout << vec[i].first << ' ' << vec[i].second << '\n';
    }

    return 0;
}