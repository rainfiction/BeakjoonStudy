#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> letter(26);
    string word;

    cin >> word;
    for (char c:word){
        letter[c - 'A']++;
    }

    int odd(0);
    char middle;
    for (int i = 0; i < 26;i++){
        if(letter[i]%2==1){
            odd++;
            letter[i]--;
            middle = i + 'A'; // 아스키코드 저장
        }
    }
    if(odd>1){
        cout << "I'm Sorry Hansoo" << '\n';
        return 0;
    }

    int len = word.length();
    vector<char> sorted(len);
    int left = 0;
    int right = len - 1;
    
    for (int i = 0; i < 26; i++){
        while(letter[i]>0){
            char ch = i + 'A';
            sorted[left++] = ch;
            sorted[right--] = ch;
            letter[i] -= 2;
        }
    }
    if(odd==1){
        sorted[len/2] = middle;
    }

    for(char c:sorted){
        cout << c;
    }

    return 0;
}

/*set을 사용할 수 있었을듯?*/