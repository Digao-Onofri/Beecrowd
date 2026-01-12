/*
    Name: WERTYU
    Link: https://judge.beecrowd.com/en/problems/view/1196
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, char> character;
    int i;
    string input;
    
    //first line
    character.insert({'1', '`'});
    character.insert({'2', '1'});
    character.insert({'3', '2'});
    character.insert({'4', '3'});
    character.insert({'5', '4'});
    character.insert({'6', '5'});
    character.insert({'7', '6'});
    character.insert({'8', '7'});
    character.insert({'9', '8'});
    character.insert({'0', '9'});
    character.insert({'-', '0'});
    character.insert({'=', '-'});

    //second line 
    character.insert({'W', 'Q'});
    character.insert({'E', 'W'});
    character.insert({'R', 'E'});
    character.insert({'T', 'R'});
    character.insert({'Y', 'T'});
    character.insert({'U', 'Y'});
    character.insert({'I', 'U'});
    character.insert({'O', 'I'});
    character.insert({'P', 'O'});
    character.insert({'[', 'P'});
    character.insert({']', '['});
    character.insert({'\\', ']'});

    //third line
    character.insert({'S', 'A'});
    character.insert({'D', 'S'});
    character.insert({'F', 'D'});
    character.insert({'G', 'F'});
    character.insert({'H', 'G'});
    character.insert({'J', 'H'});
    character.insert({'K', 'J'});
    character.insert({'L', 'K'});
    character.insert({';', 'L'});
    character.insert({'\'', ';'});

    //fourth line
    character.insert({'X', 'Z'});
    character.insert({'C', 'X'});
    character.insert({'V', 'C'});
    character.insert({'B', 'V'});
    character.insert({'N', 'B'});
    character.insert({'M', 'N'});
    character.insert({',', 'M'});
    character.insert({'.', ','});
    character.insert({'/', '.'});
    character.insert({' ', ' '});


    while(getline(cin, input)){
        for(i = 0; i < input.length(); i++){
            cout << character[input[i]];
        }
        cout << '\n';
    }

    return 0;
}