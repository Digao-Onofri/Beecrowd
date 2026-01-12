/*
    Name: Converting to Hexadecimal
    Link: https://judge.beecrowd.com/en/problems/view/1957
*/

#include <bits/stdc++.h>
using namespace std;

string decimalToHex(long long int decimalNum){
    if(decimalNum == 0){
        return "0";
    }

    string hexResult = "";
    while(decimalNum > 0){
        int remainder = decimalNum % 16;
        if(remainder < 10){
            hexResult += (char)(remainder + '0'); 
        } else{
            hexResult += (char)(remainder - 10 + 'A');
        }
        decimalNum /= 16;
    }

    reverse(hexResult.begin(), hexResult.end());
    return hexResult;
}

int main(){
    long long int value;
    string answer;

    cin >> value;

    answer = decimalToHex(value);

    cout << answer << endl;;

    return 0;
}