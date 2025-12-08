/*
    Name: Board Size
    Link: https://judge.beecrowd.com/en/problems/view/2770
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int company1, company2, cases;
    int client1, client2;

    while(cin >> company1 >> company2 >> cases){
        while(cases--){
            cin >> client1 >> client2;
            if((company1 >= client1 && company2 >= client2) || (company1 >= client2 && company2 >= client1)){
                cout << "Sim" << endl;
            } else{
                cout << "Nao" << endl;
            }
        } 
    }

    return 0;
}