#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct{
    int index;
    int grade;
    pair<int, int> p;
} information;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<information> vec;

    cin >> n;

    for (int i = 0; i < n;i++){
        int kg, cm;
        cin >> kg >> cm;
        information info = {i, 0, {kg, cm}};
        vec.push_back(info);
    }

    // pair 내림차순 sort;
    sort(vec.begin(), vec.end(), [](const information &a, const information &b)
        {
        if(a.p.first==b.p.first)
            return a.p.second > b.p.second;
        return a.p.first > b.p.first; });

    //본인 앞의 조건 맞는 사람 세서 등수 매기기
    for (int i = 0; i < n; i++) {
        int rank = 1;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (vec[j].p.first > vec[i].p.first && vec[j].p.second > vec[i].p.second) {
                rank++;
            }
        }
        vec[i].grade = rank;
    }

    //index 내림차순 sort
    sort(vec.begin(), vec.end(), [](const information &a, const information &b)
        { return a.index < b.index; });

    for (int i = 0; i < n;i++)
        cout << vec[i].grade << '\n';

    return 0;
}