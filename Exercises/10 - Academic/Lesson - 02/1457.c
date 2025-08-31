/*
    Name: Oracle of Alexandria
    Link: https://judge.beecrowd.com/en/problems/view/1457
*/

#include <stdio.h>
#include <string.h>

int main(){
    int T, i = 1;
    int number, len = 0;
    char characters[20];
    long long int result = 0;

    scanf("%d", &T);

    while(T--){
        i = 1;
        scanf("%d %s", &number, characters);
        len = strlen(characters);
        result = number;
        while(number - (i * len) >= 1){
            result *= (number - (i * len));
            i++;
        }

        printf("%lld\n", result);
    }

    return 0;
}