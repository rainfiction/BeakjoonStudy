#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int index, num;
    vector<string> input;

    string s;
    for (int i = 0; i < 3;i++){
        cin >> s;
        input.push_back(s);
        if(isdigit(s[0]))
            index = i;
    }

    if(index==0)
        num = stoi(input[0]) + 3;
    else if(index==1)
        num = stoi(input[1]) + 2;
    else if(index==2)
        num = stoi(input[2]) + 1;

    if(num%3==0&&num%5==0)
        cout << "FizzBuzz" << '\n';
    else if(num%3==0&&num%5!=0)
        cout << "Fizz" << '\n';
    else if(num%3!=0&&num%5==0)
        cout << "Buzz" << '\n';
    else
        cout << num << '\n';

    return 0;
}