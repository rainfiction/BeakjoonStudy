#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string isbn;
    cin >> isbn;

    int t, result(0), len = isbn.length();
    for (int i = 0; i < len;i++){
        if(isbn[i]=='*'){
            t = i;
            continue;
        }

        if(i%2==0)
            result += (isbn[i] - 48);
        else if(i%2==1)
            result += (isbn[i] - 48) * 3;
    }

    int num = (10 - (result % 10)) % 10;
    if(t%2==0)
        cout << num << '\n';
    else{
        for (int i = 0; i <= 9;i++){
            if((i*3)%10==num){
                cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}