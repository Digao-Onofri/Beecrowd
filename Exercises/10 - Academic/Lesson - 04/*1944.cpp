/*
    Name: Face 2015 Free Gift
    Link: https://judge.beecrowd.com/en/problems/view/1944
*/

//stack;

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    vector<string> letters;
    string card, aux;
    letters.push_back("FACE"); 

    scanf("%d", &cases);

    while (cases--){
        scanf(" %[^\n]", &card);

        aux = card;
        reverse(aux.begin(), aux.end());

        if (!letters.empty() && letters.back() == aux){
            letters.pop_back();
        } 
        else{
            letters.push_back(card); 
        }
        
        printf("%d\n", letters.size());
    }

    printf("%d\n", letters.size());
    return 0;
}
