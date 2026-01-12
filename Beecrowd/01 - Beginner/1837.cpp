/*
    Name: Preface 
    Link: https://judge.beecrowd.com/en/problems/view/1837
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, q, r;

    cin >> a >> b;
    q = a / b;
    r = a % b;

    if(r < 0 && b > 0){
        r += b;
        q -= 1;
    } else if(r < 0 && b < 0){
        r -= b;
        q += 1;
    }
    cout << q << " " << r << endl;

    return 0;
}