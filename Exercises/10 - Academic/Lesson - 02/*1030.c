/*
    Name: Flavious Josephus Legend
    Link: https://judge.beecrowd.com/en/problems/view/1030
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int qtd, size, control = 1;
    int i, NC, len;

    scanf("%d", &NC);

    while(NC--){
        scanf("%d %d", &qtd, &size);
        len = qtd;
        for(i = 1; i <= qtd; i++){
            len += i;
            if(i % 3 != 0){
                len -= size + 2;
            }
        }
        len -= size;
        
        printf("Case %d: %d\n", control, len);
        control++;
    }

    return 0;
}