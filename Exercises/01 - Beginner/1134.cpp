/*
    Name: Type of Fuel
    Link: https://judge.beecrowd.com/en/problems/view/1134
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int alcool = 0, gas = 0, diesel = 0, value;

    while(cin >> value){
        if(value == 4){
            break;
        }

        if(value == 1){
            alcool++;
        } else if(value == 2){
            gas++;
        } else if(value == 3){
            diesel++;
        } 
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}