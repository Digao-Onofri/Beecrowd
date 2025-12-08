/*
    Name: How Many Calls?
    Link: https://judge.beecrowd.com/en/problems/view/1033
*/

#include <bits/stdc++.h>
#define MAX 2e63 - 1;
using namespace std;


unsigned long long int memo[MAX];
unsigned long long int count;

int fiboMemoPD (int n){
    count++;
    if (n <= 1) return n;
    if (memo[n] != -1) 
        return memo[n];
    memo[n] = fiboMemoPD(n-1) + fiboMemoPD(n-2);
    return memo[n];
}

int main(){
    unsigned long long int number;
    int base, cases = 1;

    while(cin >> number >> base){
        if(number == 0 && base == 00){
            break;
        }

        count = 0;
        fiboMemoPD(number);
        cout << "Case " << cases << ": " << number << ' ' << base << ' ' << count 
    }


    return 0;
}