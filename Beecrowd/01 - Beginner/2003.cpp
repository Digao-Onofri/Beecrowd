/*
    Name: Sunday Morning
    Link: https://judge.beecrowd.com/en/problems/view/2003
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int hour, minutes;

    while(scanf("%d:%d", &hour, &minutes) != EOF){
        if(minutes + 60 >= 60){
            hour++;
        }

        if(hour >= 8){
            cout << "Atraso maximo: " << ((hour - 8) * 60) + minutes << endl;
        } else{
            cout << "Atraso maximo: 0" << endl;
        }
    }

    return 0;
}