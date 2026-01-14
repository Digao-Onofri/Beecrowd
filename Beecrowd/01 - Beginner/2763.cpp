/*
    Name: CPF Input and Output
    Link: https://judge.beecrowd.com/en/problems/view/2763
*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    int i;
    string cpf;

    cin >> cpf;

    for(i = 0; i < size(cpf); i++){
        if(isdigit(cpf[i])){
            cout << cpf[i];
        } else{
            cout << endl;
        }
    }

    cout << endl;

    return 0;
}