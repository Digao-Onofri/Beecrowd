/*
    Name: Fibonacci Array
    Link: https://judge.beecrowd.com/en/problems/view/1176
*/

#include <bits/stdc++.h>
using namespace std;

long long int memo[65];

long long int fibonacci(long long int i){
    if(i <= 1){
        return i;
    }    

    if(memo[i] != -1){
        return memo[i];
    }

    memo[i] = fibonacci(i - 1) + fibonacci(i - 2);
    return memo[i];
}

int main(){
    int cases, value;
    long long int answer;

    cin >> cases;
    memset(memo, -1, sizeof(memo));

    while(cases--){
        cin >> value;
        answer = fibonacci(value);

        cout << "Fib(" << value << ") = " << answer << endl;
    }

    return 0;
}