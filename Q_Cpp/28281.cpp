#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, min;
    vector<int> v;

    cin >> n >> x;

    for (int i = 0; i < n;i++){
        int num;
        cin >> num;

        v.push_back(num);
    }

    for (int i = 0; i < n - 1;i++){
        if(i==0)
            min = v[i] + v[i + 1];
        else{
            if(min > v[i] + v[i + 1])
                min = v[i] + v[i + 1];
        }
    }

    cout << min * x << '\n';

    return 0;
}