/*
    Name: The Change 
    Link: https://judge.beecrowd.com/en/problems/view/2685
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int degrees;

    while(cin >> degrees){
        degrees %= 360;
        if(degrees >= 270){
            cout << "De Madrugada!!" << endl;
        } else if(degrees >= 180){
            cout << "Boa Noite!!" << endl;
        } else if(degrees >= 90){
            cout << "Boa Tarde!!" << endl;
        } else {
            cout << "Bom Dia!!" << endl;
        }
    }

    return 0;
}