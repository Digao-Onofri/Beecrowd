/*
    Name: Internship
    Link: https://judge.beecrowd.com/en/problems/view/2533
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int subject, workload;
    int cases, ni, ci;
    double api;

    while(cin >> cases){
        
        subject = workload = 0;
        while(cases--){
            cin >> ni >> ci;
            subject += (ni * ci);
            workload += ci;
        }

        api = subject / (workload * 100.0);

        cout << fixed << setprecision(4) << api << endl;
    }

    return 0;
}