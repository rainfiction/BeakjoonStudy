#include <iostream>
using namespace std;

void swap(int &a, int &b);

int main(int argc, char* argv[]){
    int repeat, happyGrowth, sadGrowth;
    int happy(1), sad(1);

    cin >> repeat;
    cin >> happyGrowth;
    cin >> sadGrowth;

    int i(0);
    while(i!=repeat){
        i++;
        happy += happyGrowth;
        sad += sadGrowth;

        if(happy<sad){
            swap(happy, sad);
        }
        else if(happy==sad){
            sad--;
        }
    }

    cout << happy << " " << sad << endl;

    return 0;
}



void swap(int &a, int &b){
    int nTmp = a;
    a = b;
    b = nTmp;
}