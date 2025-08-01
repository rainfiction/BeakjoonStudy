#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, cumulative_sum(0);
    vector<int> v;
    v.push_back(0);

    cin >> n >> m;
    for (int i = 0; i < n;i++){
        int num;
        cin >> num;
        cumulative_sum += num;
        v.push_back(cumulative_sum);
    }

    for (int i = 0; i < m;i++){
        int x, y;
        cin >> x >> y;
        cout << v[y] - v[x-1] << '\n';
    }

    return 0;
}