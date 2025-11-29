/*
    Name: Base Conversion
    Link: https://judge.beecrowd.com/en/problems/view/1193
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> binary;
    vector<int> hexadecimal;
    int number; 
    long unsigned int i, j, cases;
    string value, type;
    string bin = "bin";
    string dec = "dec";
    string hex  = "hex";

    cin >> cases;

    for(i = 1; i <= cases; i++){ 
        
        cout << "Case " << i << ':' << endl;

        cin >> value >> type;
        binary.clear();
        hexadecimal.clear();
        if(type.compare(dec) == 0){
            //decimal to hexadecimal
            number = stoi(value);
            if (number <= 15){
                hexadecimal.push_back(number);
            }
            else{            
                while(number > 15){
                    hexadecimal.push_back(number % 16);
                    number = number / 16;
                }
                hexadecimal.push_back(number);
            }
            reverse(hexadecimal.begin(), hexadecimal.end());
            for(j = 0; j < hexadecimal.size(); j++){
                if(hexadecimal[j] >= 10){
                    cout << (char)(87 + hexadecimal[j]);
                }
                else{
                    cout << hexadecimal[j];
                }
            }
            cout << " hex" << endl;

            //decimal to binary
            number = stoi(value);
            while(number > 0){
                binary.push_back(number % 2);
                number = number / 2;
            }
            reverse(binary.begin(), binary.end());
            for(j = 0; j < binary.size(); j++){
                cout << binary[j];
            }
            cout << " bin" << endl;
        }
        else if(type.compare(hex) == 0){
            //hexadecimal to decimal
            number = 0;
            for(j = 0; j < value.length(); j++){
                if(((int) value[j]) - 87 < 0){
                    number += ((int) ((int) value[j] - 48)) * pow(16, (value.length() - 1) - j);
                }
                else{
                    number += ((int) ((int) value[j] - 87)) * pow(16, (value.length() - 1) - j);
                }
            }  
            cout << number << " dec" << endl;

            //decimal to binary
            while(number > 0){
                binary.push_back(number % 2);
                number = number / 2;
            }
            reverse(binary.begin(), binary.end());
            for(j = 0; j < binary.size(); j++){
                cout << binary[j];
            }
            cout << " bin" << endl;
        }
        else{
            //binary to decimal
            number = 0;
            for(j = 0; j < value.length(); j++){
                if(value[j] == '1'){
                    number += pow(2, (value.length() - 1) - j);
                }
            }
            cout << number << " dec" << endl;

            //decimal to hexadecimal
            if (number <= 15){
                hexadecimal.push_back(number);
            }
            else{            
                while(number > 15){
                    hexadecimal.push_back(number % 16);
                    number = number / 16;
                }
                hexadecimal.push_back(number);
            }
            reverse(hexadecimal.begin(), hexadecimal.end());
            for(j = 0; j < hexadecimal.size(); j++){
                if(hexadecimal[j] >= 10){
                    cout << (char)(87 + hexadecimal[j]);
                }
                else{
                    cout << hexadecimal[j];
                }
            }
            cout << " hex" << endl;
        }
        cout << endl;
    }

    return 0;
}