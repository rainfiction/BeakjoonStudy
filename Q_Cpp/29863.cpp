#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    int start, end, result;

    cin >> start;
    cin >> end;

    if(start>=20)
        result = (24 - start) + end;
    else
        result = end - start;

    cout << result;

    return 0;
}