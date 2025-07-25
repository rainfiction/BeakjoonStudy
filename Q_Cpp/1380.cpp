#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, tmp(0);
    while(1){
        cin >> n;
        cin.ignore();

        if(n==0)
            break;
        tmp++;//출력 넘버링에 사용할 수

        vector<string> name(n);
        vector<int> pair(n, 0);
        for (int i = 0; i < n;i++){
            getline(cin, name[i]);
        }

        int repeat(n * 2 - 1), num;
        char c;
        for (int i = 0; i < repeat;i++){
            cin >> num >> c;
            pair[num - 1]++;
        }

        for (int i = 0; i < n;i++){
            if(pair[i]!=2){
                cout << tmp << ' ' << name[i] << '\n';
            }
        }
    }

    return 0;
}