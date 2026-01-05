/*
    Name: Which Triangle
    Link: https://judge.beecrowd.com/en/problems/view/2313
*/

#include <bits/stdc++.h>
using namespace std;

int triangle(int *sides){
    return sides[0] + sides[1] > sides[2];
}

int rectangle(int *sides){
    return sides[0] * sides[0] == sides[1] * sides[1] + sides[2] * sides[2] || sides[1] * sides[1] == sides[0] * sides[0] + sides[2] * sides[2] || sides[2] * sides[2] == sides[1] * sides[1] + sides[0] * sides[0]; 
}

int main(){
    int sides[3];
    int i, j, aux;

    cin >> sides[0] >> sides[1] >> sides[2];

    for(i = 0; i < 3; i++){
        for(j = i + 1; j < 3; j++){
            if(sides[i] > sides[j]){
                aux = sides[i];
                sides[i] = sides[j];
                sides[j] = aux;
            }
        }
    }

    if(triangle(sides)){
        if((sides[0] == sides[1]) && (sides[1] == sides[2])){
            cout << "Valido-Equilatero" << endl;
        } else if(sides[0] == sides[1] || sides[1] == sides[2] || sides[0] == sides[2]){
            cout << "Valido-Isoceles" << endl;
        } else{
            cout << "Valido-Escaleno" << endl;
        }

        cout << "Retangulo: ";
        cout << (rectangle(sides) ? "S" : "N") << endl;
    } else{ 
        cout << "Invalido" << endl;
    }

    return 0;
}