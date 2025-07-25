#include <iostream>
#include <vector>
using namespace std;

int parent[51];

int find(int x){
    if (x == parent[x]) return x;
    return parent[x] = find(parent[x]);
}

void Union(int x, int y){
    x = find(x);
    y = find(y);

    if (x == y) return;

    //집합의 가장 작은 수가 대표수가 되도록 설정
    if (x < y) parent[y] = x;
    else parent[x] = y;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k, num, lie(0);
    vector<int> knowTrue;
    vector<vector<int>> save;

    cin >> n >> m >> k;
    for (int i = 1; i <= n;i++){ //유니온 준비
        parent[i] = i;
    }
    
    for (int i = 0; i < k; i++){ //진실 아는 자 저장
        cin >> num;
        knowTrue.push_back(num);
    }

    //입력받기, 유니온 묶기
    for (int p = 0; p < m;p++){
        int count, ceo;
        vector<int> s;

        cin >> count;
        
        for (int i = 0; i < count;i++){
            cin >> num;
            if(i==0)
                ceo = num;
            s.push_back(num);
            Union(ceo, num);
        }
        save.push_back(s);
    }

    //파티 검사
    for (int p = 0; p < m;p++){ //파티 하나씩
        bool canLie = 1;

        for (int i = 0; i < save[p].size();i++){ //파티 사람 검사
            int party = save[p][i];

            for (int j = 0; j < knowTrue.size(); j++){ // 한명씩 검사
                if (find(party) == find(knowTrue[j])){
                    //파티 참석자의 한명이라도 진실을 아는 사람들과 같은 그룹이면 거짓말을 못 한다 판단
                    canLie = 0;
                    break;
                }
            }
            if(!canLie)
                break;
        }

        if(canLie)
            lie++;
    }

    cout << lie << '\n';

    return 0;
}



/*알고리즘은 훌륭한데, 답은 아님.
애초에 set으로는 풀 수 없는 문제이기도 하고...
유니온 파인드로 풀어야 함.*/

/*입력값을 이차원배열에 저장을 해둬야
1. 유니온 연결
2. 파티 거짓말 검사
를 모두 할 수 있음

💡 핵심 기능 2개
1. find(x)
x가 속한 팀(집합)의 대표 번호(부모)를 찾는 함수
예: find(3) → 3번 사람이 속한 그룹의 대표 번호 리턴

2. union(x, y)
x와 y를 같은 팀으로 합치는 함수
→ 즉, x와 y가 같은 집합(팀)이라고 선언

union(a, b)는 단순히 a가 b를 먹는다가 아니라
a와 b의 루트를 찾아서 한 쪽을 다른 쪽에 붙이는 것임.
*/





// #include <iostream>
// #include <set>
// #include <vector>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m, k, num, lie(0);
//     set<int> knowTrue;
//     set<int> knowFalse;

//     cin >> n >> m >> k;
//     for (int i = 0; i < k;i++){
//         cin >> num;
//         knowTrue.insert(num);
//     }

//     for (int i = 0; i < m;i++){
//         int count, Tcount(0), Fcount(0);
//         vector<int> vec;

//         cin >> count;
//         for (int j = 0; j < count;j++){
//             cin >> num;
//             vec.push_back(num);
//             if(knowTrue.find(num)!=knowTrue.end())
//                 Tcount++;
//             else if(knowFalse.find(num)!=knowFalse.end())
//                 Fcount++;
//         }

//         if(Tcount==0){ //진실을 아는 자가 없음
//             lie++;
//             for (int j = 0; j < count;j++)
//                 knowFalse.insert(vec[j]);
//         }
//         else if(Tcount!=0&&Fcount!=0){ //진실, 거짓 둘 다 아는 사람들
//             lie--;
//             for(int j = 0; j < count;j++){
//                 knowTrue.insert(vec[j]);
//                 if(knowFalse.find(vec[i])!=knowFalse.end())
//                     knowFalse.erase(vec[i]);
//             }
//         }
//         else if(Tcount!=0&&Fcount==0){ //진실을 아는 사람이 있고, 거짓은 없음
//             for(int j = 0; j < count;j++)
//                 knowTrue.insert(vec[j]);
//         }
//     }

//     cout << lie << '\n';

//     return 0;
// }