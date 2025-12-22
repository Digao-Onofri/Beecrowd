/*
    Name: Simple Base Conversion
    Link: https://judge.beecrowd.com/en/problems/view/1199
*/

#include <bits/stdc++.h>
using namespace std;

int hexCharToDecimal(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else if (c >= 'A' && c <= 'F') {
        return 10 + (c - 'A');
    } else if (c >= 'a' && c <= 'f') {
        return 10 + (c - 'a');
    }
    return 0; 
}

int hexadecimalToDecimal(const std::string& hexVal) {
    int len = hexVal.length();
    int decimalValue = 0;
    int base = 1; 

    for (int i = len - 1; i >= 0; i--) {
        decimalValue += hexCharToDecimal(hexVal[i]) * base;
        base *= 16;
    }
    return decimalValue;
}

string decimalToHex(int decimalNum) {
    if (decimalNum == 0) {
        return "0";
    }

    string hexResult = "";
    while (decimalNum > 0) {
        int remainder = decimalNum % 16;
        if (remainder < 10) {
            hexResult += (char)(remainder + '0'); // Convert 0-9 to character
        } else {
            hexResult += (char)(remainder - 10 + 'A'); // Convert 10-15 to A-F
        }
        decimalNum /= 16;
    }
    reverse(hexResult.begin(), hexResult.end()); // Reverse to get correct order
    return hexResult;
}

int main(){
    string number, aux;
    int value, answer;
    string::iterator i;

    while(cin >> number){

        if(number[0] == '0' && number[1] == 'x'){
            for(i = number.begin() + 2; i != number.end(); i++){
                aux += *i;
            }
            answer = hexadecimalToDecimal(aux);
            cout << answer << endl;
            aux.clear();
        } else if(number[0] != '-'){
            value = stoi(number);
            aux = decimalToHex(value);
            cout << "0x" << aux << endl;
            aux.clear();
        } else{
            break;
        }
    }
        
    return 0;
}