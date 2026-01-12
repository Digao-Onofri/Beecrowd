/*
    Name: Vehicular Restriction
    Link: https://judge.beecrowd.com/en/problems/view/2712
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    string plate;
    bool failure;

    cin >> cases;

    while(cases--){
        cin >> plate;

        failure = false;
        if(size(plate) > 8 || size(plate) < 8){
            failure = true;
        } else{
            if(!isupper(plate[0]) || !isupper(plate[1]) || !isupper(plate[2])){
                failure = true;
            }

            if(plate[3] != '-'){
                failure = true;
            }

            if(!isdigit(plate[4]) || !isdigit(plate[5]) || !isdigit(plate[6]) || !isdigit(plate[7])){
                failure = true;
            }
        }

        if(!failure){
            if(plate[7] == '1' || plate[7] == '2'){
                cout << "MONDAY" << endl;
            } else if(plate[7] == '3' || plate[7] == '4'){
                cout << "TUESDAY" << endl;
            } else if(plate[7] == '5' || plate[7] == '6'){
                cout << "WEDNESDAY" << endl;
            } else if(plate[7] == '7' || plate[7] == '8'){
                cout << "THURSDAY" << endl;
            } else{
                cout << "FRIDAY" << endl;
            }
        } else{
            cout << "FAILURE" << endl;
        }

    }


    return 0;
}