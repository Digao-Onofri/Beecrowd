/*
    Name: Bino's Challenge
    Link: https://judge.beecrowd.com/en/problems/view/2060
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, value, m2, m3, m4, m5;

    cin >> cases;

    m2 = m3 = m4 = m5 = 0;

    while(cases--){
        cin >> value; 
        if(value % 2 == 0){
            m2++;
        }

        if(value % 3 == 0){
            m3++;
        }

        if(value % 4 == 0){
            m4++;
        }

        if(value % 5 == 0){
            m5++;
        }
    }

    cout << m2 << " Multiplo(s) de 2" << endl;
    cout << m3 << " Multiplo(s) de 3" << endl;
    cout << m4 << " Multiplo(s) de 4" << endl;
    cout << m5 << " Multiplo(s) de 5" << endl;

    return 0;
}