/*
    Name: Game Time with Minutes
    Link: https://judge.beecrowd.com/en/problems/view/1047
*/

#include <stdio.h>

int main (){
    int ihour, iminute, fhour, fminute;
    int itotalminutes, ftotalminutes;

    scanf("%d %d %d %d", &ihour, &iminute, &fhour, &fminute);

    itotalminutes = ihour * 60 + iminute;
    ftotalminutes = fhour * 60 + fminute;

    if(itotalminutes >= ftotalminutes){
        ftotalminutes += 24 * 60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (ftotalminutes - itotalminutes) / 60, (ftotalminutes - itotalminutes) % 60);

    return 0;
}