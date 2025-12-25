/*
    Name: Summing Consecutive Integers
    Link: https://judge.beecrowd.com/en/problems/view/1149
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, n, sum, count;

    cin >> a;

    while(cin >> n){
        if(n > 0){
            break;
        }
    }

    count = 1;
    sum = 0;
    while(count <= n){
        sum += a++;
        count++;
    }

    cout << sum << endl;

    return 0;
}