#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cut;
    double result(0), count(0);
    vector<int> vec;

    cin >> n;
    if(n==0){
        cout << '0' << '\n';
        return 0;
    }

    for (int i = 0; i < n;i++){ //셋 추가
        int p;
        cin >> p;
        vec.push_back(p);
    }
    sort(vec.begin(), vec.end());

    //30퍼 범위 구하기
    cut = round(n * 0.15);

    //사용값 골라내기
    int NmCut = n - cut;
    for (int i = cut; i < NmCut; i++){
        result += vec[i];
        count++;
    }

    cout << round(result / count) << '\n';

    return 0;
}