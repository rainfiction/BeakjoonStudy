#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << "Gnomes:" << '\n';
    
    while(n--){
        int stack(0);
        vector<int> v;

        for (int i = 0; i < 3;i++){
            int num;
            cin >> num;
            v.push_back(num);
        }

        vector<int> x = v;

        sort(x.begin(), x.end());
        for (int i = 0; i < 3;i++){
            if(v[i]!=x[i]){
                stack++;
                break;
            }
        }
        for (int i = 0; i < 3;i++){
            if(v[i]!=x[2-i]){
                stack++;
                break;
            }
        }

        if(stack==2)
            cout << "Unordered" << '\n';
        else
            cout << "Ordered" << '\n';
    }

    return 0;
}