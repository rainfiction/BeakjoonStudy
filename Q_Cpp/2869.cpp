/*오답_시간 초과
시간제한이 0.25초라 while문을 쓰면 안 될 듯?*/
// #include <iostream>
// using namespace std;

// int main(int argc, char* argv[]){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int a, b, v, height(0), tmp(1);

//     cin >> a >> b >> v;

//     height += a;
//     while(height<v){
//         height -= b;
//         tmp++;
//         height += a;
//     }

//     cout << tmp << '\n';

//     return 0;
// }

/*달팽이는 결국 (막대의 높이 - 낮에 올라가는 높이) 이상 까지만 도달하면 다음 날 정상에 도달할 수 있습니다. 그렇다면 저 위치에 도달하기 전까지는 올라가도 항상 밤에 미끄러지므로, 하루마다 올라가는 높이는 (낮에 올라가는 높이 - 밤에 미끄러지는 높이)가 되겠죠.

날짜 계산은 올림((다음날 정상에 도달하기 위한 최소 높이) / (하루마다 올라가는 높이)) + 하루가 더 필요하므로 어렵지 않게 구할 수 있습니다.*/



#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a, b, v;
    cin >> a >> b >> v;

    cout << (v - b + (a - b - 1)) / (a - b) << '\n';

    return 0;
}