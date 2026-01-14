/*
    Name: Input and Output of Integers
    Link: https://judge.beecrowd.com/en/problems/view/2757
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    cout << "A = " << a << ", B = " << b << ", C = " << c << endl;

    cout << "A = " << setw(10) << setfill(' ') << a << ", B = " << setw(10) 
    << setfill(' ') << b << ", C = " << setw(10) << setfill(' ') << c << endl;

    cout << "A = " << (a > 0 ? '0' : '-') << setw(9) << setfill('0') << abs(a) 
    << ", B = " << (b > 0 ? '0' : '-') << setw(9) << setfill('0') << abs(b) 
    << ", C = " << (c > 0 ? '0' : '-') << setw(9)<< setfill('0') << abs(c) << endl;

    cout << "A = " << left << setw(10) << setfill(' ') << a << ", B = " << left 
    << setw(10) << setfill(' ') << b << ", C = " << left << setw(10) << setfill(' ') 
    << c << endl;

    return 0;
}