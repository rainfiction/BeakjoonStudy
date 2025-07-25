#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


typedef struct{
    int age;
    string name;
} UserInformation;

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<UserInformation> info(n);

    for (int i = 0; i < n;i++){
        cin >> info[i].age >> info[i].name;
    }

    stable_sort(info.begin(), info.end(), [](const UserInformation &x, const UserInformation &y)
                { return x.age < y.age; });

    for (int i=0; i < n;i++){
        cout << info[i].age << ' ' << info[i].name << '\n';
    }

    return 0;
}