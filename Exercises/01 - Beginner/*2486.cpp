/*
    Name: C Mais ou Menos?
    Link: https://judge.beecrowd.com/en/problems/view/2486
    wrong answer (15%)
*/

#include <bits/stdc++.h>
using namespace std;

int vitamin(string fruit){
    
    if(fruit == " suco de laranja"){
        return 120;
    } else if(fruit == " morango" || fruit == " mamao"){
        return 85;
    } else if(fruit == " goiaba"){
        return 70;
    } else if(fruit == " manga"){
        return 56;
    } else if(fruit == " laranja"){
        return 50;
    } else{
        return 34;
    }
}
int main(){
    int cases, amount, sum;
    string fruit;

    while(cin >> cases){
        if(cases == 0){
            break;
        }

        sum = 0;
        while(cases--){
            cin >> amount;
            getline(cin, fruit);

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