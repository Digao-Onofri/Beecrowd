/*
    Name: Floating Number Input and Output
    Link: https://judge.beecrowd.com/en/problems/view/2758
    Wrong answer (5%)
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
    float a, b;
    double a1, b1, mantissa;
    int exp;

    cin >> a >> b >> a1 >> b1;

    cout << "A = " << fixed << setprecision(6) << a
    << ", B = " << fixed << setprecision(6) << b << endl
    << "C = " << fixed << setprecision(6) << a1
    << ", D = " << fixed << setprecision(6) << b1 << endl;

    cout << "A = " << fixed << setprecision(1) << a
    << ", B = " << fixed << setprecision(1) << b << endl
    << "C = " << fixed << setprecision(1) << a1
    << ", D = " << fixed << setprecision(1) << b1 << endl;

    cout << "A = " << fixed << setprecision(2) << a
    << ", B = " << fixed << setprecision(2) << b << endl
    << "C = " << fixed << setprecision(2) << a1
    << ", D = " << fixed << setprecision(2) << b1 << endl;

    cout << "A = " << fixed << setprecision(3) << a
    << ", B = " << fixed << setprecision(3) << b << endl
    << "C = " << fixed << setprecision(3) << a1
    << ", D = " << fixed << setprecision(3) << b1 << endl;

    mantissa = get_mantissa_base10(a, &exp);
    cout << "A = " << fixed << setprecision(3) << mantissa << 'E' << 
    (exp >= 0 ? '+' : '-') << setw(2) << setfill('0') << exp;
    mantissa = get_mantissa_base10(b, &exp);
    cout << ", B = " << fixed << setprecision(3) << mantissa << 'E' << 
    (exp >= 0 ? '+' : '-') << setw(2) << setfill('0') << exp << endl;
    mantissa = get_mantissa_base10(a1, &exp);
    cout << "C = " << fixed << setprecision(3) << mantissa << 'E' << 
    (exp >= 0 ? '+' : '-') << setw(2) << setfill('0') << exp;
    mantissa = get_mantissa_base10(b1, &exp);
    cout << ", D = " << fixed << setprecision(3) << mantissa << 'E' << 
    (exp >= 0 ? '+' : '-') << setw(2) << setfill('0') << exp << endl;
    
    cout << "A = " << fixed << setprecision(0) << a
    << ", B = " << fixed << setprecision(0) << b << endl
    << "C = " << fixed << setprecision(0) << a1
    << ", D = " << fixed << setprecision(0) << b1 << endl;


    return 0;
}