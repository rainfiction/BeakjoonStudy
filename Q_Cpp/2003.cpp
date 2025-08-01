#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    int left(0), right(0), cumulative_sum(0), count(0);
    vector<int> v;

    cin >> n >> m;

    for (int i = 0; i < n;i++){
        int num;
        cin >> num;
        v.push_back(num);
    }

    while(1){
        if(cumulative_sum==m){
            count++;
            cumulative_sum -= v[left];
            left++;
        }
        else if(cumulative_sum<m){
            if(right==n)
                break;
            cumulative_sum += v[right];
            right++;
        }
        else if(cumulative_sum>m){
            cumulative_sum -= v[left];
            left++;
        }
    }

    cout << count << '\n';

    return 0;
}