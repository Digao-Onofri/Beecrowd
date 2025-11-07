/*
    Name: DDD
    Link: https://judge.beecrowd.com/en/problems/view/1050
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> DDD;
    int input;

    DDD[61] = "Brasilia";
    DDD[71] = "Salvador";
    DDD[11] = "Sao Paulo";
    DDD[21] = "Rio de Janeiro";
    DDD[32] = "Juiz de Fora";
    DDD[19] = "Campinas";
    DDD[27] = "Vitoria";
    DDD[31] = "Belo Horizonte";

    cin >> input;

    if(DDD.find(input) != DDD.end()){
        cout << DDD[input] << endl;
    } else {
        cout << "DDD nao cadastrado" << endl;
    }

    return 0;
}