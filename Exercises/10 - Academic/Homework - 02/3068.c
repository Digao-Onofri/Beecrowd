/*
    Name: Meteors
    Link: https://judge.beecrowd.com/en/problems/view/3068
*/

#include <stdio.h>
 
int main() {
    int x1, y1, x2, y2, sum;
    int number, x, y, i = 1;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    while(x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0){
        sum = 0;
        printf("Teste %i\n", i);
        scanf("%d", &number);

        while(number--){
            scanf("%d %d", &x, &y);
            if((x <= x1 && x >= x2) || (x >= x1 && x <= x2)){
                if((y <= y1 && y >= y2) || (y >= y1 && y <= y2)){
                    sum += 1;
                }
            }
        }

        printf("%d\n", sum);

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        i++;
    }
 
    return 0;
}