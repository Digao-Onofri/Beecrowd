/*
    Name: Triangle Types
    Link: https://judge.beecrowd.com/en/problems/view/1045
*/

#include <bits/stdc++.h>
using namespace std;

int main(){ 
    vector<double> sides;
    vector<double>::iterator it;
    double a, b, c;

    cin >> a >> b >> c;

    sides.push_back(a);
    sides.push_back(b);
    sides.push_back(c);

    sort(sides.begin(), sides.end(), greater<double>());
    
    if(sides[0] >= sides[1] + sides[2]){
        cout << "NAO FORMA TRIANGULO" << "\n";
    }
    else{
        if(sides[0] * sides[0] == (sides[1] * sides[1]) + (sides[2] * sides[2])){
            cout << "TRIANGULO RETANGULO" << "\n";
        }
        else if(sides[0] * sides[0] > (sides[1] * sides[1]) + (sides[2] * sides[2])){
            cout << "TRIANGULO OBTUSANGULO" << "\n";
        }
        else{
            cout << "TRIANGULO ACUTANGULO" << "\n";
        }

        if(sides[0] == sides[1] && sides[1] == sides[2]){
            cout << "TRIANGULO EQUILATERO" << "\n";
        }
        else if((sides[0] == sides[1] && sides[1] != sides[2]) || (sides[0] != sides[1] && sides[1] == sides[2])){
            cout << "TRIANGULO ISOSCELES" << "\n";
        }
    }

    return 0;
}