/*
    Name: Middle Nephew
    Link: https://judge.beecrowd.com/en/problems/view/3301
*/

#include <stdio.h>

int main(){
    int H, Z, L;

    scanf("%d %d %d", &H, &Z, &L);

    if((H > Z && Z > L) || (H < Z && Z < L)){
        printf("zezinho\n");
    }
    else if((Z > H && H > L) || (Z < H && H < L)){
        printf("huguinho\n");
    }
    else{
        printf("luisinho\n");
    }

    return 0;
}