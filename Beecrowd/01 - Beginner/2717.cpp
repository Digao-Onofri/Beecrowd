/*
    Name: Elf Time
    Link: https://judge.beecrowd.com/en/problems/view/2717
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int time, gift1, gift2;

    cin >> time >> gift1 >> gift2;

    if(time >= gift1 + gift2){
        cout << "Farei hoje!" << endl;
    } else{
        cout << "Deixa para amanha!" << endl;
    }

    return 0;
}