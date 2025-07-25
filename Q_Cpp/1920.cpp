/*오답-이중 for문 사용: 시간 초과로 다른 알고리즘을 사용해야 함.*/
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(int argc, char* argv[]){
//     int n, m;

//     cin >> n;
    
//     vector<long int> a(n);
//     for (int i = 0; i < n;i++){
//         cin >> a[i];
//     }

//     cin >> m;

//     vector<long int> mNum(m);
//     for (int i = 0; i < m;i++){
//         cin >> mNum[i];
//     }

//     for(auto &number:mNum){
//         int yes(0);
//         for(auto &as:a){
//             if(number==as){
//                 yes = 1;
//                 break;
//             }
//         }
//         cout << yes << endl;
//     }

//     return 0;
// }
/*동적 배열은 범위 기반 for문을 사용할 수 없다. vector로 바꾸거나 기존 c의 for문을 사용하거나 해야 함.

실전에서는 무조건 vector 사용이 우선이라 함.*/



#include <iostream>
#include <unordered_set>
using namespace std;

int main(int argx, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;

    cin >> n;
    unordered_set<long int> a;
    for (int i = 0; i < n;i++){
        int aInput;
        cin >> aInput;
        a.insert(aInput);
    }

    cin >> m;
    for (int i = 0; i < m;i++){
        int mInput;
        cin >> mInput;
        cout << a.count(mInput) << '\n';
    }

    return 0;
}

/*endl이 flush까지 해야 해서 많이 느림. 대부분의 경우에서 \n을 쓰는 것이 시간적으로 이득이 된다. 쓰는 것으로 시간 초과가 날 정도로 성능 차이가 많이 난다.*/