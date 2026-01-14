/*
    Name: Input and Output Character
    Link: https://judge.beecrowd.com/en/problems/view/2759
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    char a, b, c;

    cin >> a >> b >> c;

    cout << "A = " << a << ", B = " << b << ", C = " << c << endl;
    cout << "A = " << b << ", B = " << c << ", C = " << a << endl;
    cout << "A = " << c << ", B = " << a << ", C = " << b << endl;

    return 0;
}