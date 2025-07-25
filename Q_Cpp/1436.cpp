#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i(665), count(0);
    string istring, title;

    cin >> n;

    while(count!=n){
        i++;
        istring = to_string(i);
        
        if(istring.find("666")!=string::npos){
            count++;
            title = istring;
        }
    }

    cout << title << '\n';

    return 0;
}