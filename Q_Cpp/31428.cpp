#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    char target;
    multiset<char> ms;

    cin >> n;
    while(n--){
        char literal;
        cin >> literal;

        ms.insert(literal);
    }

    cin >> target;

    cout << ms.count(target) << '\n';

    return 0;
}