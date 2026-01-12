/*
    Name: Simple Factorial 
    Link: https://judge.beecrowd.com/en/problems/view/1153
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int answer = 1;
    int value, i;

    cin >> value;

    for(i = 1; i <= value; i++){
        answer *= i;
    }
    
    cout << answer << endl;

    return 0;
}