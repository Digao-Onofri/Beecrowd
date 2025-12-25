/*
    Name: Divisors I
    Link: https://judge.beecrowd.com/en/problems/view/1157
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int value, i;

    cin >> value;

    for(i = 1; i <= value; i++){
        if(value % i == 0){
            cout << i << endl;
        }
    }
    
    return 0;
}