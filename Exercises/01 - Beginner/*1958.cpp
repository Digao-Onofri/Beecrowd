
/*
    Name: Scientific Notation
    Link: https://judge.beecrowd.com/en/problems/view/1958
    wrong answer(5%)
*/

#include <bits/stdc++.h>
using namespace std;

double get_mantissa_base10(double arg, int* exp) {
    if (arg == 0.0) {
        *exp = 0;
        return 0.0;
    }
    // Calculate the exponent (base 10)
    *exp = static_cast<int>(floor(log10(fabs(arg))));
    // Calculate the mantissa
    return arg * pow(10.0, -(*exp));
}

int main(){
    double value;
    int expoent;
    double mantissa;

    cin >> value;

    mantissa = get_mantissa_base10(value, &expoent);



    cout << (mantissa >= 0 ? "+" : "") << fixed << setprecision(4) 
    << mantissa << "E" << (expoent >= 0 ? "+" : "-") << setw(2) 
    << setfill('0') << abs(expoent) << endl;

    return 0;
}