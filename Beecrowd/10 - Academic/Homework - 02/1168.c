/*
    Name: LED
    Link: https://judge.beecrowd.com/en/problems/view/1168
*/

#include <stdio.h>
 
int main() {
    int N, leds;
    char value;

    scanf("%d", &N);

    while(N--){
        leds = 0;
        
        scanf(" %c", &value);

        while(value != '\n'){
            if((int)value - 48 == 1){
                leds += 2;
            }
            else if((int)value - 48 == 2 || (int)value - 48 == 3 || (int)value - 48 == 5){
                leds += 5;
            }
            else if((int)value - 48 == 4){
                leds += 4;
            }
            else if((int)value - 48 == 6 || (int)value - 48 == 9 || (int)value - 48 == 0){
                leds += 6;
            }
            else if((int)value - 48 == 7){
                leds += 3;
            }
            else{
                leds += 7;
            }
            scanf("%c", &value);
        }

        printf("%d leds\n", leds);
    }    

    return 0;
}