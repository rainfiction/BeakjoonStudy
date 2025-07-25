#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <cctype>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    unordered_map<int, string> intToStr;
    unordered_map<string, int> strToInt;

    cin >> n >> m;

    for (int i = 1; i <= n;i++){
        string name;
        cin >> name;
        intToStr.insert(make_pair(i, name));
        strToInt.insert(make_pair(name, i));
    }

    for (int i = 0; i < m;i++){
        string name;
        cin >> name;

        //문자일 경우
        if(isdigit(name[0])==0)
            cout << strToInt[name] << '\n';
        //숫자일 경우
        else{
            cout << intToStr[stoi(name)] << '\n';
        }
    }

    return 0;
}



/*양방향 해시맵?*/