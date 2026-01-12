/*
    Name: Several Scores with Validation
    Link: https://judge.beecrowd.com/en/problems/view/1118
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    double value, avg = 0, count = 0;
    int calc;

    while(cin >> value){
        if(value >= 0 && value <= 10){
            avg += value;
            count++;
        } else{
            cout << "nota invalida" << endl;
        }

        if(count == 2){
            printf("media = %.2lf\n", avg / 2);
            while(true){
                cout << "novo calculo (1-sim 2-nao)" << endl;
                cin >> calc;
                if(calc == 1 || calc == 2){
                    break;
                }
            }
            
            if(calc == 1){
                avg = 0;
                count = 0;
            } else{
                break;
            }
        }
    }

    return 0;
}