#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, taesu, p;
    vector<pair<int, bool>> v;

    cin >> n >> taesu >> p;
    for (int i = 0; i < n;i++){
        int score;
        cin >> score;
        v.push_back(make_pair(score, false));
    }

    sort(v.begin(), v.end(), [](const pair<int, bool> &a, const pair<int, bool> &b)
        { return a.first > b.first; });

    if(v.size()==p&&v.back().first>=taesu){
        cout << -1 << '\n';
        return 0;
    }
    else
        v.push_back(make_pair(taesu, true));
    
    sort(v.begin(), v.end(), [](const pair<int, bool> &a, const pair<int, bool> &b)
        { return a.first > b.first; });

    int repeat = v.size(), grade = 0;
    for (int i = 0; i < repeat;i++){
        if(i==0)
            grade++;
        else if(v[i].first != v[i-1].first)
            grade = i + 1;
        if(v[i].second){
            cout << grade << '\n';
            return 0;
        }
    }

    return 0;
}