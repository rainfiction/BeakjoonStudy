#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while(n--){
        string str;

        cin >> str;

        vector<char> v = {str[0]};
        int len = str.length();

        for (int i = 1; i < len;i++){
            if(str[i]!=v.back())
                v.push_back(str[i]);
        }

        for(auto &a:v)
            cout << a;

        cout << '\n';
    }

    return 0;
}