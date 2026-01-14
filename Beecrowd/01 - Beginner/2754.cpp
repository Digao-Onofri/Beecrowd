/*
    Name: Output 7
    Link: https://judge.beecrowd.com/en/problems/view/2754
*/

#include <bits/stdc++.h>
using namespace std;

double get_mantissa_base10(double arg, int *exp){
    if(arg == 0.0){
        *exp = 0;
        return 0.0;
    }

    *exp = static_cast<int>(floor(log10(fabs(arg))));
    return arg * pow(10.0, -(*exp));
}

int main(){
    double a, b;
    double mantissaa;
    double mantissab;
    int expa, expb;

    a = 234.345;
    b = 45.698;

    cout << fixed << setprecision(6) << a << " - " << fixed << setprecision(6) << b << endl;
    cout << fixed << setprecision(0) << a << " - " << fixed << setprecision(0) << b << endl;
    cout << fixed << setprecision(1) << a << " - " << fixed << setprecision(1) << b << endl;
    cout << fixed << setprecision(2) << a << " - " << fixed << setprecision(2) << b << endl;
    cout << fixed << setprecision(3) << a << " - " << fixed << setprecision(3) << b << endl;
    
    mantissaa = get_mantissa_base10(a, &expa);
    mantissab = get_mantissa_base10(b, &expb);
    cout << fixed << setprecision(6) << mantissaa << 'e' << (expa >= 0 ? '+' : '-') << setw(2) 
    << setfill('0') << expa << " - " << fixed << setprecision(6) << mantissab << 'e' 
    << (expb >= 0 ? '+' : '-') << setw(2) << setfill('0') << expb << endl;
    cout << fixed << setprecision(6) << mantissaa << 'E' << (expa >= 0 ? '+' : '-') << setw(2) 
    << setfill('0') << expa << " - " << fixed << setprecision(6) << mantissab << 'E' 
    << (expb >= 0 ? '+' : '-') << setw(2) << setfill('0') << expb << endl;

    cout << fixed << setprecision(3) << a << " - " << fixed << setprecision(3) << b << endl;
    cout << fixed << setprecision(3) << a << " - " << fixed << setprecision(3) << b << endl;

    return 0;
}