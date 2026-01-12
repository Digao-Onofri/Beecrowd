/*
    Name: Angry Ducks
    Link: https://judge.beecrowd.com/en/problems/view/1163
*/

#include <stdio.h>
#include <math.h>

int main(){

    double height, angle, speed, pi = 3.14159;
    double speedy, speedx, fp, g = 9.80665;
    int p1, p2, n;
    
    while(scanf("%lf", &height) != EOF){

        scanf("%d %d", &p1, &p2);

        scanf("%d", &n);

        while(n--){
            scanf("%lf %lf", &angle, &speed);

            angle = angle * pi/180;

            speedy = speed * sin(angle);
            speedx = speed * cos(angle);

            fp = speedx * ((speedy + sqrt(pow(speedy, 2) + 2 * g * height)) / g);

            if(p1 <= fp && p2 >= fp){
                printf("%.5lf -> DUCK\n", fp);
            }
            else{  
                printf("%.5lf -> NUCK\n", fp);
            }
        }
    }

    return 0;
}