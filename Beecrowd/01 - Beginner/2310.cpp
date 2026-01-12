/*
    Name: Volleyball
    Link: https://judge.beecrowd.com/en/problems/view/2310
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int sums, sumb, suma;
    int serv, blocks, att;
    int sucs, sucb, suca;
    int cases;
    string name;

    cin >> cases;

    sums = sumb = suma = 0;
    sucs = sucb = suca = 0;
    while(cases--){
        cin >> name;

        cin >> serv >> blocks >> att;
        sums += serv;
        sumb += blocks;
        suma += att;

        cin >> serv >> blocks >> att;
        sucs += serv;
        sucb += blocks;
        suca += att;

    }

    cout << "Pontos de Saque: " << fixed << setprecision(2) << ((double) sucs * 100) / sums << " %." << endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << ((double) sucb * 100) / sumb <<  " %." << endl;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << ((double) suca * 100) / suma  <<  " %." << endl;

    return 0;
}