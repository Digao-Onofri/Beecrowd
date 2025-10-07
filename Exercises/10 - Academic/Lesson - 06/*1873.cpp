/*
    Name: Rock-paper-scissors-lagarto-Spock
    Link: https://judge.beecrowd.com/en/problems/view/1873
    Wrong answer(10%)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    string rajesh, sheldon;
    string tesoura = "tesoura";
    string papel = "papel";
    string pedra = "pedra";
    string lagarto = "lagarto";
    string spock = "spock";

    scanf("%d", &cases);    

    while(cases--){
        cin >> rajesh >> sheldon;
        
        if(rajesh.compare(sheldon) == 0){
            printf("empate\n");
        }
        else if(rajesh.compare(tesoura) == 0 && (sheldon.compare(papel) == 0 || sheldon.compare(lagarto)) == 0){
            printf("rajesh\n");
        }
        else if(sheldon.compare(tesoura) == 0 && (rajesh.compare(papel) == 0 || rajesh.compare(lagarto)) == 0){
            printf("sheldon\n");
        }
        else if(rajesh.compare(papel) == 0 && (sheldon.compare(pedra) == 0 || sheldon.compare(spock)) == 0){
            printf("rajesh\n");
        }
        else if(sheldon.compare(papel) == 0 && (rajesh.compare(papel) == 0 || rajesh.compare(lagarto)) == 0){
            printf("sheldon\n");
        }
        else if(rajesh.compare(pedra) == 0 && (sheldon.compare(lagarto) == 0 || sheldon.compare(tesoura) == 0)){
            printf("rajesh\n");
        }
        else if(sheldon.compare(pedra) == 0 && (rajesh.compare(lagarto) == 0 || rajesh.compare(tesoura)) == 0 ){
            printf("sheldon\n");
        }
        else if(rajesh.compare(lagarto) == 0 && (sheldon.compare(spock) == 0 || sheldon.compare(papel) == 0)){
            printf("rajesh\n");
        }
        else if(sheldon.compare(lagarto) == 0 && (rajesh.compare(spock) == 0 || rajesh.compare(papel) == 0)){
            printf("sheldon\n");
        }
        else if(rajesh.compare(spock) == 0 && (sheldon.compare(tesoura) == 0 || sheldon.compare(pedra) == 0)){
            printf("rajesh\n");
        }
        else{
            printf("sheldon\n");
        }
    }

    return 0;
}