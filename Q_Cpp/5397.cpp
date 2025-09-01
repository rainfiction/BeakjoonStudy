#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    while (n--){
        string line;
        vector<char> result;
        stack<char> left;
        stack<char> right;

        cin >> line;
        int len = line.length();

        for (int i = 0; i < len;i++){
            if(line[i]=='<'){
                if(left.empty())
                    continue;
                else{
                    right.push(left.top());
                    left.pop();
                }
            }
            else if(line[i]=='>'){
                if(right.empty())
                    continue;
                else{
                    left.push(right.top());
                    right.pop();
                }
            }
            else if(line[i]=='-'){
                if(left.empty())
                    continue;
                else
                    left.pop();
            }
            else{
                left.push(line[i]);
            }
        }

        while(!left.empty()){
            result.push_back(left.top());
            left.pop();
        }

        reverse(result.begin(), result.end());

        while(!right.empty()){
            result.push_back(right.top());
            right.pop();
        }

        for(auto &a:result)
            cout << a;
        cout << '\n';
    }

    return 0;
}