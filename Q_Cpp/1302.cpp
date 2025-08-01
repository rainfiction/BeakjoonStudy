#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    map<string, int> m;

    cin >> n;
    for (int i = 0; i < n;i++){
        string book_name;
        cin >> book_name;
        m[book_name]++;
    }

    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [](const pair<string, int> &a, const pair<string, int> &b){
        if(a.second != b.second)
            return a.second > b.second;
        return a.first < b.first;
    });

    cout << v[0].first << '\n';

    return 0;
}

/*백준 테스트케이스 사이트에서 통과해도 정작 제출하면 틀렸습니다 나오는 경우가 꽤 잦음... 신뢰해도 되는 사이트인지 슬슬 의문*/