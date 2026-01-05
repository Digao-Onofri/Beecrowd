/*
    Name: Notas da Prova
    Link: https://judge.beecrowd.com/en/problems/view/2344
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int grade;

    cin >> grade;

    if(grade >= 86){
        cout << "A" << endl;
    } else if(grade >= 61){
        cout << "B" << endl;
    } else if(grade >= 36){
        cout << "C" << endl;
    } else if(grade >= 1){
        cout << "D" << endl;
    } else{
        cout << "E" << endl;
    }

    return 0;
}