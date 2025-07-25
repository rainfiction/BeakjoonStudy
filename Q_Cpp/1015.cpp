#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Arr {
    int a;
    int index;
    int numbering;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<Arr> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].a;
        arr[i].index = i;
    }

    stable_sort(arr.begin(), arr.end(), [](const Arr &x, const Arr &y) {
        return x.a < y.a;
    });

    for (int i = 0; i < n; i++) {
        arr[i].numbering = i;
    }

    stable_sort(arr.begin(), arr.end(), [](const Arr &x, const Arr &y) {
        return x.index < y.index;
    });

    for (int i = 0; i < n; i++) {
        cout << arr[i].numbering << ' ';
    }

    return 0;
}

/*보통 sort는 비교 함수가 없으면 기본적으로 오름차순으로 정렬되지만, 구조체는 예외이다. 반드시 세 번째 인수로 비교 함수를 넣어 줘야 함.*/