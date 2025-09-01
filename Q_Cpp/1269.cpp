#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a_size, b_size, total(0);
    vector<int> vector_a;
    vector<int> vector_b;
    unordered_set<int> set_a;
    unordered_set<int> set_b;

    cin >> a_size >> b_size;

    //입력 단계
    for (int i = 0; i < a_size;i++){
        int num;
        cin >> num;

        vector_a.push_back(num);
        set_a.insert(num);
    }

    for (int i = 0; i < b_size;i++){
        int num;
        cin >> num;

        vector_b.push_back(num);
        set_b.insert(num);
    }

    
    //연산 단계
    for (int i = 0; i < b_size;i++){
        if(set_a.find(vector_b[i])!=set_a.end())
            set_a.erase(vector_b[i]);
    }

    for (int i = 0; i < a_size;i++){
        if(set_b.find(vector_a[i])!=set_b.end())
            set_b.erase(vector_a[i]);
    }

    total = set_a.size() + set_b.size();

    cout << total << '\n';

    return 0;
}