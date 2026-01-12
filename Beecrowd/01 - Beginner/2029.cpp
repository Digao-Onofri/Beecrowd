/*
    Name: Honey Reservoir
    Link: https://judge.beecrowd.com/en/problems/view/2029
*/

#include <bits/stdc++.h>
#define pi 3.14
using namespace std;

int main(){
    double volume, diameter;
    double height, area, radius;

    while(cin >> volume >> diameter){
        radius = diameter / 2;
        height = volume / (pi * (radius * radius)); 
        area = pi * (radius * radius);
        cout << "ALTURA = " << fixed << setprecision(2) << height << endl;
        cout << "AREA = " << fixed << setprecision(2) << area << endl;
    }

    return 0;
}