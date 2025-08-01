#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int r, c, count(0);
        vector<string> box;

        cin >> r >> c;

        for (int i = 0; i < r;i++){
            string sweet;
            cin >> sweet;
            box.push_back(sweet);
        }

        for (int i = 0; i < r;i++){
            for (int j = 0; j < c;j++){
                if((j <= c-3) && (box[i][j]=='>') && (box[i][j+1]=='o') && (box[i][j+2]=='<'))
                    count++;
                
                if((i <= r-3) && (box[i][j]=='v') && (box[i+1][j]=='o') && (box[i+2][j]=='^'))
                    count++;
            }
        }

        cout << count << '\n';
    }
}