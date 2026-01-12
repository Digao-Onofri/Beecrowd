/*
    Name: The Race of Slugs
    Link: https://judge.beecrowd.com/en/problems/view/1789
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int slugs;
    int biggest, speed;
    bool first;

    while(cin >> slugs){

        first = true;
        while(slugs--){
            cin >> speed;
            if(first){
                first = false;
                biggest = speed;
            } else{
                if(biggest < speed){
                    biggest = speed;
                }
            }
        }

        if(biggest >= 20){
            cout << 3 << endl;
        } else if(biggest >= 10){
            cout << 2 << endl;
        } else{
            cout << 1 << endl;
        }
    }

    return 0;
}