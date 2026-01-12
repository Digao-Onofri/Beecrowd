/*
    Name: Event
    Link: https://judge.beecrowd.com/en/problems/view/2172
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int n, m;

    while(cin >> n >> m){
        if(n == 0 && m == 0){
            break;
        }

        cout << n * m << endl;
    }

    return 0;
}