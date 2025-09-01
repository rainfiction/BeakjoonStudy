#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    stack<int> s;

    cin >> n;

    while(n--){
        int height;
        cin >> height;

        if(s.empty())
            s.push(height);
        else{
            while(!s.empty() && s.top()<=height)
                s.pop();
            s.push(height);
        }
    }

    cout << s.size() << '\n';

    return 0;
}