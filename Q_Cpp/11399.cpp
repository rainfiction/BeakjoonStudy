#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, total(0);
    cin >> n;

    vector<int> time(n);
    for (int i = 0; i < n;i++){
        int t;
        cin >> t;
        time[i] = t;
    }

    sort(time.begin(), time.end());

    for (int i = 0; i < n;i++){
        total += time[i] * (n - i);
    }

    cout << total << '\n';

    return 0;
}

// 1 2 3 3 4
// 1
// 1 2
// 1 2 3
// 1 2 3 3
// 1 2 3 3 4

// 5 8 9 6 4
// 13 19
// 32