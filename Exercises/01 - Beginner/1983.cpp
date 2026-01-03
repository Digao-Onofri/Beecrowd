/*
    Name: The Chosen 
    Link: https://judge.beecrowd.com/en/problems/view/1983
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    int student, name;
    double grade, best;
    bool first;

    cin >> cases;

    first = true;
    while(cases--){
        cin >> student >> grade;

        if(first){
            best = grade;
            first = false;
        } 

        if(best < grade){
            best = grade;
            name = student;
        }
    }

    if(best >= 8.0){
        cout << name << endl;
    } else{
        cout << "Minimum note not reached" << endl;
    }

    return 0;
}