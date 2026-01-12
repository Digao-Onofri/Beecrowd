/*
    Name: The Pythagorean Theorem
    Link: https://judge.beecrowd.com/en/problems/view/1582
*/

#include <stdio.h>

int mdc(int a, int b) {
    int temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int pythagorean(int a, int b, int c){
    return a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a;
}

int primitive(int a, int b, int c){
    //This way I can receive the mmc of a, b, c
    //which is mmc = mdc(a, mdc(b, c))
    return mdc(a, mdc(b, c)) == 1;
}

int main(){
    int number1, number2, number3;

    while(scanf("%d %d %d", &number1, &number2, &number3) != EOF){

        printf("tripla");

        if(pythagorean(number1, number2, number3)){
            printf(" pitagorica");

            if(primitive(number1, number2, number3)){
                printf(" primitiva");
            }
        }
        printf("\n");
    }

    return 0;
}