/*
    Name: Christmas Lights
    Link: https://judge.beecrowd.com/en/problems/view/2718
    Wrong answer (75%)
*/

#include <bits/stdc++.h>
using namespace std;

string decimalToBin(int decimalValue) {
    // Specify the number of bits (e.g., 8, 16, 32, or 64)
    // Here, 8 bits is used as an example.
    return bitset<64>(decimalValue).to_string();
}

int main(){
    int cases, burned, sequence, bulbs;
    string bin;
    string::iterator it;

    cin >> cases;

    while(cases--){
        cin >> bulbs;
        burned = sequence = 0;
        bin = decimalToBin(bulbs);
        
        for(it = bin.begin(); it != bin.end(); it++){
            if(*it == '1'){
                burned++;
            } else{
                if(sequence < burned){
                    sequence = burned;
                    burned = 0;
                }
            }
        }

        cout << burned << endl;
    }

    return 0;
}