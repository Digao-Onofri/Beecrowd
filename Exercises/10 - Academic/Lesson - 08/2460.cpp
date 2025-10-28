/*
    Name: Fila
    Link: https://judge.beecrowd.com/en/problems/view/2460
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> fila;
    list<int>::iterator it;
    unordered_set<int> absents;
    int amount, people;
    int first, desists; 

    scanf("%d", &amount);

    while(amount--){
        scanf("%d", &people);
        fila.push_back(people);
    }

    scanf("%d", &amount);
    while(amount--){
        scanf("%d", &desists);
        absents.insert(desists);
    }

    first = 1;
    for(it = fila.begin(); it != fila.end(); it++){
        if(absents.find(*it) == absents.end()){        
            if(first){
                first = 0;
                printf("%d", *it);
            }
            else{
                printf(" %d", *it);
            }
        }
    }
    printf("\n");

    return 0;
}
