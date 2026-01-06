/*
    Name: Deciphering the Encrypted Card
    Link: https://judge.beecrowd.com/en/problems/view/2502
*/

#include <bits/stdc++.h>
using namespace std;

char cipher[25], decipher[25];
int c, n;

char deciphering(char ch){
    int i;
    bool up = false;

    if(isupper(ch)){
        up = true;
    }

    for(i = 0; i < c; i++){
        if(tolower(cipher[i]) == tolower(ch)){
            return (up ? toupper(decipher[i]) : tolower(decipher[i]));
        }
    }

    for(i = 0; i < c; i++){
        if(tolower(decipher[i]) == tolower(ch)){
            return (up ? toupper(cipher[i]) : tolower(cipher[i]));
        }
    }

    return ch;
}

int main(){
    char phrase[1010];
    int i;

    while(cin >> c >> n){

        scanf(" %[^\n]", cipher);
        scanf(" %[^\n]", decipher);

        while(n--){
            scanf(" %[^\n]", phrase);

            for(i = 0; i < strlen(phrase); i++){
                cout << deciphering(phrase[i]);
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}