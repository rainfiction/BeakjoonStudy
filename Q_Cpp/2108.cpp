#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, maxcount(0), often;
    double result(0);
    vector<int> vec;
    map<int, int> m;

    cin >> n;
    for (int i = 0; i < n;i++){
        int num;
        cin >> num;
        result += num;
        vec.push_back(num);
        m[num]++;
    }

    sort(vec.begin(), vec.end());

    //산술평균, 중앙값
    cout << (int)round(result / n) << '\n';
    cout << vec[n / 2] << '\n';



    /*****************중요!*****************/
    //최빈값
    for (auto &[num, count] : m){
        if(count>maxcount)
            maxcount = count;
    }

    vector<int> vvv;
    for (auto &[num, count] : m) {
        if (count == maxcount) vvv.push_back(num);
    }

    //vvv에 원소가 두 개 이상이면 최빈값도 두 개 이상이라는 뜻
    sort(vvv.begin(), vvv.end());
    if (vvv.size() == 1) cout << vvv[0] << '\n';
    else cout << vvv[1] << '\n';
    /**********************************/



    //최빈값, 범위
    cout << vec.back() - vec.front() << '\n';

    return 0;
}

/*count를 사용한 코드는 로직은 맞는데 시간 초과
map으로 받으면 자동으로 중복값은 두번째 index를 올려줘서 편함.
count()는 시간이 오래 걸리는 함수이다.*/