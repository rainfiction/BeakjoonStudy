#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, set, one, minset(1000), minone(1000), min(100000), a, b, c, bigger;

    cin >> n >> m;

    for (int i = 0; i < m; i++){
        cin >> set >> one;
        if(set<minset)
            minset = set;
        if(one<minone)
            minone = one;
    }

    a = n * minone;
    b = (n / 6) * minset + (n % 6) * minone;
    c = (n / 6 + 1) * minset;
    (a < b) ? bigger = a : bigger = b;
    if(c<bigger)
        bigger = c;
    if(bigger<min)
        min = bigger;

    cout << min << '\n';
    return 0;
}

/*그래도 이것보다 더 깔끔하게 작성할 수 있는 코드도 있지 않을까?*/