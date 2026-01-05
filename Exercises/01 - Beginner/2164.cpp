/*
    Name: Fast Fibonacci
    Link: https://judge.beecrowd.com/en/problems/view/2164
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int value;
    double answer;

    cin >> value;
    answer = (pow(((1 + sqrt(5)) / 2), value) - pow(((1 - sqrt(5)) / 2), value)) / sqrt(5);

    cout << fixed << setprecision(1) << answer << endl;

    return 0;
}