/*
    Name: Pedrinho's Christmas 
    Link: https://judge.beecrowd.com/en/problems/view/2139
    Wrong answer (5%)
*/

#include <bits/stdc++.h>
using namespace std;

int months[14] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    int month, day, days;

    while(cin >> month >> day){
        if(month == 12){
            if(day == 25){
                cout << "E natal!" << endl;
            } else if(day == 24){
                cout << "E vespera de natal!" << endl;
            } else if(day > 25){
                cout << "Ja passou!" << endl;
            } else{
                cout << "Faltam " << 25 - day << " dias para o natal!" << endl;
            }
        } else{
            days = 0;
            while(month < 12){
                days += months[month];
                month++;
            }

            if(day > 25){
                days -= (25 - day);
            } else{
                days += (25 - day);
            }

            cout << "Faltam " << days << " dias para o natal!" << endl;
        }
    }

    return 0;
}