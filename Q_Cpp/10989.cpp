// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, num;
//     vector<int> vec;

//     cin >> n;
//     for (int i = 0; i < n;i++){
//         cin >> num;
//         vec.push_back(num);
//     }

//     sort(vec.begin(), vec.end());

//     for (auto i:vec){
//         cout << i << '\n';
//     }

//     return 0;
// }

/*mutiset을 이용한 정렬이 제일 간편하지만, mutiset은 내부적으로 균형 이진 탐색 트리를 사용하기 때문에 각 노드마다 포인터 및 구조체 오버헤드가 발생한다.

메모리 초과가 발생하기에, 이 경우에는 좀 느리더라도 vector과 sort를 이용한 정렬 알고리즘을 사용하는 것이 낫다. 애초에 이 문제는 시간은 넉넉하고 메모리가 적게 주어진다는 특징이 있음.


+)추가: 벡터 소트도 메모리 초과임

개 무식하게 배열로 돌리면 되나
?이게되네*/


#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    int count[10001] = {0};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        count[num]++;
    }

    for (int i = 0; i < 10001; i++) {
        while (count[i]--) {
            cout << i << '\n';
        }
    }

    return 0;
}


//아니 시 근데 이건 좀 너무 무식하자나