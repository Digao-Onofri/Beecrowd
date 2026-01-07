/*
    Name: Greyscale
    Link: https://judge.beecrowd.com/en/problems/view/2630
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, i, j, k, rgb[4], aux, average;
    string type;

    cin >> cases;

    for(i = 1; i <= cases; i++){
        cin >> type;
        cin >> rgb[0] >> rgb[1] >> rgb[2];
        cout << "Caso #" << i << ": ";
        if(type == "min" || type == "max"){
            for(j = 0; j < 3; j++){
                for(k = j + 1; k < 3; k++){
                    if(rgb[j] >= rgb[k]){
                        aux = rgb[j];
                        rgb[j] = rgb[k];
                        rgb[k] = aux;
                    }
                }
            }

            if(type == "min"){
                cout << rgb[0] << endl;
            } else{
                cout << rgb[2] << endl;
            }
        } else if(type == "mean"){
            average = (rgb[0] + rgb[1] + rgb[2]) / 3;
            cout << average << endl;
        } else{
            average = 0.3 * rgb[0] + 0.59 * rgb[1] + 0.11 * rgb[2];
            cout << average << endl;
        }
    }

    return 0;
}