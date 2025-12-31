/*
    Name: Population Increase
    Link: https://judge.beecrowd.com/en/problems/view/1160
    time limit exceeded 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, pa, pb, time;
    double pg1, pg2;

    cin >> cases;

    while(cases--){
        cin >> pa >> pb;
        cin >> pg1 >> pg2;

        time = 0;
        while(pa <= pb){
            pa = pa + ((pa * pg1) / 100);
            pb = pb + ((pb * pg2) / 100);
            time++;
        }

        if(time > 100){
            cout << "Mais de 1 seculo." << endl;
        } else{
            cout << time << " anos." << endl;
        }
    }
    return 0;
}