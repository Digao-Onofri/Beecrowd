/*
    Name: Output 1
    Link: https://judge.beecrowd.com/en/problems/view/2747
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j;
    bool print;

    for(i = 1; i <= 7; i++){
        for(j = 1; j <= 39; j++){
            print = false;
            if(i == 1 || i == 7){
                cout << '-';
                print = true;
            } 

            if((j == 1 && i != 1 && i != 7) || (j == 39 && i != 1 && i != 7)){
                cout << '|';
                print = true;
            } 

            if(!print){
                cout << ' ';
            }

        }
        cout << endl;
    }

    return 0;
}