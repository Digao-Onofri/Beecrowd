/*
    Name: Splitting the Coke
    Link: https://judge.beecrowd.com/en/problems/view/1549
*/

#include <stdio.h>
#define pi 3.14159265358979323846
int main(){
    double volume_height;
    int cases;
    int friends, coke;
    int smaller, larger, height;

    scanf("%d", &cases);

    while(cases--){
        scanf("%d %d", &friends, &coke);
        scanf("%d %d %d", &smaller, &larger, &height);
        coke /= friends;
        volume_height = 3 * coke /(pi * (larger * larger + larger * smaller + smaller * smaller));

        printf("%.2lf\n", volume_height);
    }

    return 0;
}