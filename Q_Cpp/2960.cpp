#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, tmp(0), index(2);

    cin >> n >> k;
    n++;
    vector<bool> v(n);

    while(1){
        if(v[index]==1){
            index++;
            continue;
        }
        else{
            v[index] = 1;
            tmp++;
        }

        if(tmp==k)
            break;
        else{
            for (int i = index * 2; i < n; i += index){
                if(v[i]==1) continue;
                else{
                    v[i] = 1;
                    tmp++;
                }

                if(tmp==k){
                    cout << i << '\n';
                    return 0;
                }
            }
        }
        index++;
    }

    cout << index << '\n';
}