/*
    Name: C Mais ou Menos?
    Link: https://judge.beecrowd.com/en/problems/view/2486
*/

#include <bits/stdc++.h>
using namespace std;

int vitamin(char *fruit){
    char suco[25] = "suco de laranja\0";
    char morango[25] = "morango fresco\0";
    char mamao[25] = "mamao\0";
    char goiaba[25] = "goiaba vermelha\0";
    char manga[25] = "manga\0";
    char laranja[25] = "laranja\0";

    if(strcmp(fruit, suco) == 0){
        return 120;
    } else if(strcmp(fruit, morango) == 0|| strcmp(fruit, mamao) == 0){
        return 85;
    } else if(strcmp(fruit, goiaba) == 0){
        return 70;
    } else if(strcmp(fruit, manga) == 0){
        return 56;
    } else if(strcmp(fruit, laranja) == 0){
        return 50;
    } else{
        return 34;
    }
}

int main(){
    int cases, amount, sum;
    char fruit[25];

    while(cin >> cases){
        if(cases == 0){
            break;
        }

        sum = 0;
        while(cases--){
            cin >> amount;
            scanf(" %[^\n]", fruit);

            sum += (amount * vitamin(fruit));
        }

        if(sum > 130){
            cout << "Menos " << abs(sum - 130) << " mg" << endl;
        } else if(sum > 110){
            cout << sum << " mg" << endl;
        } else{
            cout << "Mais " << abs(110 - sum) << " mg" << endl; 
        }
    }

    return 0;
}