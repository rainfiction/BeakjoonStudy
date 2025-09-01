#include <iostream>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, total(0);
    map<int, int> hmap;

    cin >> n >> m;

    while(n--){
        int repeat;

        cin >> repeat;
        for (int i = 0; i < repeat;i++){
            int student;
            cin >> student;
            hmap[student]++;
        }
    }

    for(auto &[a,b]:hmap){
        if(b>=m)
            total++;
    }

    cout << total << '\n';

    return 0;
}