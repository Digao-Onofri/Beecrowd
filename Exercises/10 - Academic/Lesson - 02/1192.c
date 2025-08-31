/*
    Name: Paula's Mathematic Game
    Link: https://judge.beecrowd.com/en/problems/view/1192
*/

#include <stdio.h>
#include <ctype.h>

int main(){
    int N, result, first, third;
    char second;

    scanf("%d", &N);

    while(N--){
        result = 0;
        scanf("%d %c %d", &first, &second, &third);

        if(first == third){
            result = first * third;
        }
        else if(isupper(second)){
            result = third - first;
        }
        else{
            result = first + third;
        }

        printf("%d\n", result);
    }

    return 0;
}