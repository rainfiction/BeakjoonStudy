#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
    string words[5];
    string line = "";

    for (int i = 0; i < 5;i++){
        cin >> words[i];
    }

    for (int i = 0; i < 15;i++){
        for (int j = 0; j < 5;j++){
            if(i < words[j].length()){
                line += words[j][i];
            }
        }
    }

    cout << line << endl;

    return 0;
}