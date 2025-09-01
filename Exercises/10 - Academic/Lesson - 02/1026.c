/*
    Name: To Carry or not to Carry
    Link: https://judge.beecrowd.com/en/problems/view/1026
*/

#include <stdio.h>

int main() {
    unsigned int a, b;
    
    while(scanf("%u %u", &a, &b) != EOF){
        printf("%u\n", a ^ b); //Calculate sum without carries
    }

    return 0;
}