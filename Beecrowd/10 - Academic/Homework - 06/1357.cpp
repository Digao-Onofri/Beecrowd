/*
    Name: In Braille
    Link: https://judge.beecrowd.com/en/problems/view/1357
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> cells;
    vector<char> digits;
    map<string, char> braille;
    map<char, string> line1, line2;
    string braille_cells;
    int cases, i;
    char number, letter;

    braille["*....."] = '1';
    braille["*.*..."] = '2';
    braille["**...."] = '3';
    braille["**.*.."] = '4';
    braille["*..*.."] = '5';
    braille["***..."] = '6';
    braille["****.."] = '7';
    braille["*.**.."] = '8';
    braille[".**..."] = '9';
    braille[".***.."] = '0';

    line1['1'] = "*.";
    line1['2'] = "*.";
    line1['3'] = "**";
    line1['4'] = "**";
    line1['5'] = "*.";
    line1['6'] = "**";
    line1['7'] = "**";
    line1['8'] = "*.";
    line1['9'] = ".*";
    line1['0'] = ".*";

    line2['1'] = "..";
    line2['2'] = "*.";
    line2['3'] = "..";
    line2['4'] = ".*";
    line2['5'] = ".*";
    line2['6'] = "*.";
    line2['7'] = "**";
    line2['8'] = "**";
    line2['9'] = "*.";
    line2['0'] = "**";

    cin >> cases;

    while(cases != 0){

        cin >> letter;
        if(letter == 'S'){
            digits.clear();
            for(i = 0; i < cases; i++){
                cin >> number;
                digits.push_back(number);
            }
            for(i = 0; i < cases * 3; i++){
                if(i < cases){
                    if(i == 0){
                        cout << line1[digits[i]];
                    }
                    else{  
                        cout << " " << line1[digits[i]];
                    }
                }
                else if(i < cases * 2){
                    if(i == cases){
                        cout << endl;
                        cout << line2[digits[i - cases]];
                    }
                    else{
                        cout << " " << line2[digits[i - cases]];
                    }
                }
                else{
                    if(i == cases * 2){
                        cout << endl;
                        cout << "..";
                    }
                    else{
                        cout << " " << "..";  
                    }
                }
            }
            cout << endl;
        }
        else{
            cells.clear();
            for(i = 0; i < cases * 3; i++){
                cin >> braille_cells;
                cells.push_back(braille_cells);
            }
            for(i = 0; i < cases; i++){
                cout << braille[(cells[i] + cells[cases + i] + cells[cases * 2 + i])];
            }
            cout << endl;
        }

        cin >> cases;
    }

    return 0;
}