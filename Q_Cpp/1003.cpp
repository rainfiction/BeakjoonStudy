#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    while(t!=0){
        t--;
        cin >> n;
        vector<int> fib(n + 1);

        if(n==0){
            cout << "1 0" << '\n';
            continue;
        }

        for (int i = 0 ; i < n + 1 ; i++){
            if(i == 0)
                fib[i] = 0;
            else if(i==1)
                fib[i] = 1;
            else
                fib[i] = fib[i - 2] + fib[i - 1];
        }

        cout << fib[n - 1] << ' ' << fib[n] << '\n';
    }
    return 0;
}



/*메모이제이션 없으면 시간 초과*/
/*재귀함수만 사용 시 시간 초과*/
/*
0, 1 출력 회수에는 규칙이 존재함.
'fibonacci(n)에서 0의 호출 회수는 fibonacci(n-1), 1의 호출 회수는 fibonacci(n) 과 같다.'
이 규칙과 메모이제이션으로 수열 값을 저장해놓으면 빠른 시간 안에 연산을 완료할 수 있다.

이 규칙을 알고 나면 문제는 결국 "피보나치 함수를 배열값에 저장해놓기" 가 전부인 쉬운 문제가 된다...
*/