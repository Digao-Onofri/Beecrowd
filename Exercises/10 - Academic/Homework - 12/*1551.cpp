/*
    Name: Complete Sentence
    Link: https://judge.beecrowd.com/en/problems/view/1551
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int chars[28], i, cases, count;
    char phrase[2010];

    cin >> cases;

    while(cases--){
        scanf(" %[^\n]", phrase);
        memset(chars, 0, sizeof(chars));
        count = 0;
        for(i = 0; i < strlen(phrase); i++){
            if(chars[phrase[i] - 97] == 0){
                count++;
            }
            chars[phrase[i] - 97] = 1;
        }

        if(count == 26){
            cout << "frase completa" << endl;
        } else if(count > 13){
            cout << "frase quase completa" << endl;
        } else{
            cout << "frase mal elaborada" << endl;
        }
    }


    return 0;
}