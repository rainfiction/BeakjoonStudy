#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, count = 0, pattern = 0;
    string str;
    cin >> n >> m >> str;

    for (int i = 1; i < m - 1; i++) {
        if (str[i - 1] == 'I' && str[i] == 'O' && str[i + 1] == 'I') {
            pattern++;
            if (pattern == n) {
                count++;
                pattern--;  // 겹치기 위해 한 칸 줄이기
            }
            i++;
        } else {
            pattern = 0;
        }
    }

    cout << count << '\n';
}
/*심플 이즈 더 베스트*/







/*야매 슬라이딩 윈도우로 만든 코드
시간 초과로 부분 성공*/
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m, count(0);
//     string str;
//     vector<char> v{'I'};
//     cin >> n >> m >> str;

//     for (int i = 0; i < n;i++){
//         v.push_back('O');
//         v.push_back('I');
//     }

//     string in(v.begin(), v.end());

//     int inLen = in.length() - 1;
//     int sortTime = m - inLen + 2;
//     for (int i = 0; i < sortTime; i++){
//         string search(str.substr(i, inLen + 1));
//         if(in==search)
//             count++;
//     }

//     cout << count << '\n';

//     return 0;
// }