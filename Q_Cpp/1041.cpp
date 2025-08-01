#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //정육면체 크기, 최솟값들
    long long int n, min(50LL), minPair(100LL), minTuple(150LL);
    
    vector<pair<int, int>> dice;
    vector<bool> checkTwo = {0, 0, 0, 0, 1, 1};
    vector<bool> checkThree = {0, 0, 0, 1, 1, 1};

    cin >> n;

    //입력 + 1면 선별
    for (int i = 1; i <= 6;i++){
        int num;
        cin >> num;
        if(min>num)
            min = num;
        dice.push_back(make_pair(i, num));
    }


    if(n==1){
        long long int total(0);
        sort(dice.begin(), dice.end(), [](const pair<int, int> &a, const pair<int, int> &b){return a.second < b.second;});

        for (int i = 0; i < 5;i++){
            total += dice[i].second;
        }
        cout << total << '\n';
        return 0;
    }


    //2면 선별
    do{
        long long int total(0);
        multimap<int, int> setTwo;
        
        for (int i = 0; i < 6;i++){
            if(checkTwo[i])
                setTwo.insert(dice[i]);
        }

        if(setTwo.count(1)&&setTwo.count(6) || setTwo.count(2)&&setTwo.count(5) || setTwo.count(3)&&setTwo.count(4))
            continue;
        else{
            for(auto &[key, number]:setTwo)
                total += number;
            if(minPair>total)
                minPair = total;
        }
    } while (next_permutation(checkTwo.begin(), checkTwo.end()));

    //3면 선별
    do{
        long long int total(0);
        multimap<int, int> setThree;

        for (int i = 0; i < 6;i++){
            if(checkThree[i])
                setThree.insert(dice[i]);
        }

        if(setThree.count(1)&&setThree.count(6) || setThree.count(2)&&setThree.count(5) || setThree.count(3)&&setThree.count(4))
            continue;
        else{
            for(auto &[key, number]:setThree)
                total += number;
            if(minTuple>total)
                minTuple = total;
        }
    } while (next_permutation(checkThree.begin(), checkThree.end()));


    if(n==2){
        cout << minPair * 4 + minTuple * 4 << '\n';
    }
    else{ //참고: Gpt -> 오버플로우 방지 -> 효과가 있는지는...?
        long long int cnt3 = 4;
        long long int cnt2 = 8LL * (n - 2) + 4;
        long long int cnt1 = (5LL * n - 6) * (n - 2);

        long long int result = min * cnt1 + minPair * cnt2 + minTuple * cnt3;

        cout << result << '\n';
    }

    return 0;
}

//조합 참고 https://dahye730.tistory.com/9
