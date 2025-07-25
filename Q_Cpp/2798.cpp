#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, total, max(0);
    cin >> n >> total;

    vector<int> cards(n);
    vector<bool> select(n, 0);
    for (int i = 0; i < 3;i++)
        select[i] = 1;

    for (int i = 0; i < n;i++)
        cin >> cards[i];

    do{
        int sum(0);
        for (int i = 0; i < n;i++){
            if(select[i])
                sum += cards[i];
        }
        if(sum>max&&sum<=total)
            max = sum;
    } while (prev_permutation(select.begin(), select.end()));

    cout << max << '\n';
    return 0;
}