#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, num;
    unordered_map<int, int> map;
    cin >> n;

    for (int i = 0; i < n;i++){
        cin >> num;
        if(map.find(num)==map.end())
            map.insert({num, 1});
        else
            map[num]++;
    }

    cin >> m;
    for (int i = 0; i < m;i++){
        cin >> num;
        cout << map[num] << ' ';
    }

    return 0;
}

/*map과 unordered_map의 시간 차이가 꽤 남. 각각 장점이 있긴 한데 시간적으로는 unordered_map이 훨씬 빠름.

근데 이 코드의 시간복잡도도 기준에 비해선 꽤 아슬아슬했었을 것 같다*/