#include <iostream>
#include <set>
using namespace std;

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    set<int> nList;

    for (int i = 0; i < n;i++){
        int input;
        cin >> input;
        nList.insert(input);
    }

    for(auto element:nList){
        cout << element << '\n';
    }

    return 0;
}

/*그렇게 머리 싸매던 시간 문제가 이렇게 쉽게 해결되다니 허탈할 지경...*/