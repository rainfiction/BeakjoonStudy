#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int n;
        cin >> n;

        map<string, int> cloth;
        for (int i = 0; i < n; i++) {
            string name, type;
            cin >> name >> type;
            cloth[type]++;
        }

        int count = 1;
        for (auto &p : cloth) {
            count *= (p.second + 1);
        }

        cout << count - 1 << '\n';
    }

    return 0;
}
/*수학을 잘 해야 하는 이유... ㅋㅎㅋㅋㅋㅋ*/




/*아래거 로직은 맞지만 시간 초과됨
이 문제는 수학 공식으로도 풀 수 있기 때문에 굳이 prev_permutation에 set까지 끌고 와 개고샐할 필요가 없다...*/
// #include <iostream>
// #include <map>
// #include <vector>
// #include <set>
// #include <algorithm>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int testCase;
//     cin >> testCase;

//     for (int t = 0; t < testCase;t++){
//         int n, count(0);
//         map<string, int> cloth;
//         set<string> s;
//         vector<string> v;

//         cin >> n;

//         for (int i = 0; i < n;i++){
//             string name, type;
//             cin >> name >> type;
//             cloth.insert(make_pair(type, 0));
//             cloth[type]++;
//             s.insert(type);
//         }

//         int SIZE = cloth.size();
//         for (auto &a : s){
//             v.push_back(a);
//         }

//             for (int i = 1; i <= SIZE; i++)
//             {
//                 vector<bool> select(SIZE, false);

//                 for (int j = 0; j < i; j++)
//                     select[j] = true;

//                 do
//                 {
//                     int num(1);
//                     for (int j = 0; j < SIZE; j++)
//                     {
//                         if(select[j])
//                             num *= cloth[v[j]];
//                     }
//                     count += num;
//                 } while (prev_permutation(select.begin(), select.end()));
//             }

//         cout << count << '\n';
//     }

//     return 0;
// }