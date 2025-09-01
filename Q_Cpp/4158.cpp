#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;

    cin >> n >> m;

    while(n!=0&&m!=0){
        int count(0);
        unordered_set<int> us;
        
        for (int i = 0; i < n;i++){
            int num;
            cin >> num;

            us.insert(num);
        }

        for (int i = 0; i < m;i++){
            int num;
            cin >> num;

            if(us.find(num)!=us.end()){
                count++;
            }
        }

        cout << count << '\n';

        cin >> n >> m;
    }

    return 0;
}