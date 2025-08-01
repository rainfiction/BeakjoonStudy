#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    vector<int> v;

    cin >> n >> m;

    for (int i = 0; i < m;i++){
        int price;
        cin >> price;
        v.push_back(price);
    }

    sort(v.begin(), v.end(), greater<int>());

    int final_price(0), max(0);
    int repeat = min(n, m);
    for (int i = 0; i < repeat;i++){
        if(max < v[i] * (i+1)){
            max = v[i] * (i+1);
            final_price = v[i];
        }
    }

    cout << final_price << ' ' << max << '\n';

    return 0;
}