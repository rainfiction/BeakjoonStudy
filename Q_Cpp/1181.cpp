#include <iostream>
#include <set>
using namespace std;

struct CompareWord{
    bool operator()(const string &a, const string &b) const{
        if(a.length()!=b.length())
            return a.length() < b.length();
        return a < b;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string w;
    set<string, CompareWord> words;

    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> w;
        words.insert(w);
    }

    for(string w:words){
        cout << w << '\n';
    }

    return 0;
}