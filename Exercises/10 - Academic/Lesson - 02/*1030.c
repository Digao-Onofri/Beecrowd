/*
    Name: Flavious Josephus Legend
    Link: https://judge.beecrowd.com/en/problems/view/1030
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int qtd, size, answer;
    int i, NC, control = 1;

    scanf("%d", &NC);

    while(NC--){
        answer = 0;
        scanf("%d %d", &qtd, &size);
        int array[size]; 
        memset(array, 1, sizeof(array));
        
        for(i = 1; i <= qtd; i++){
            if(i % 3 != 0){
                array[size] = 0;
                size += 2;
            }
        }

        for(i = 0; i < sizeof(array); i++){
            if(array[i] == 1){
                answer = i;
                break;
            }
        }
        
        printf("Case %d: %d\n", control, answer);
        control++;
    }

    return 0;
}