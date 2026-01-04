/*
    Name: Approximate Number of Primes
    Link: https://judge.beecrowd.com/en/problems/view/2159
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int value;
    double left, right;

    cin >> value;

    left = value / log(value);
    right = 1.25506 * left;

    cout << fixed << setprecision(1) << left << " " <<
    fixed << setprecision(1) << right << endl;

    return 0;
}