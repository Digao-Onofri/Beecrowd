/*
    Name: The Change Continues!!
    Link: https://judge.beecrowd.com/en/problems/view/2686
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int hours, minutes, seconds;
    double degrees;
    
    while(cin >> degrees){
        if(degrees >= 270){
            cout << "De Madrugada!!" << endl;
        } else if(degrees >= 180){
            cout << "Boa Noite!!" << endl;
        } else if(degrees >= 90){
            cout << "Boa Tarde!!" << endl;
        } else{
            cout << "Bom Dia!!" << endl;
        }
    
        hours = 6;
        minutes = degrees * 4;
        seconds = 0;
        while(minutes >= 60){
            hours++;
            minutes -= 60;
        }
        cout << setw(2) << setfill('0') << hours % 24 << ":"
        << setw(2) << setfill('0') << minutes << ":"
        << setw(2) << setfill('0') << seconds << endl;
    }

    return 0;
}