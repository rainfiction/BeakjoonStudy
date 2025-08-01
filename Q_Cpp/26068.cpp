#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count(0);
    cin >> n;

    for (int i = 0; i < n;i++){
        char nothing1, nothing2;
        int num;
        cin >> nothing1 >> nothing2 >> num;

        if(num<=90)
            count++;
    }

    cout << count << '\n';

    return 0;
}