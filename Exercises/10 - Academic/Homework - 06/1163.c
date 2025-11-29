/*
    Name: Angry Ducks
    Link: https://judge.beecrowd.com/en/problems/view/1163
*/

#include <stdio.h>
#include <math.h>
#define gravity 9.80665
#define pi 3.14159

int main(){
    double height, angle, speed, land_point;
    double horizontal_speed, vertical_speed;
    int land_point1, land_point2, cases;

    while(scanf("%lf", &height) != EOF){
        scanf("%d %d", &land_point1, &land_point2);
        scanf("%d", &cases);

        while(cases--){
            scanf("%lf %lf", &angle, &speed);

            angle = angle * (pi/180);

            horizontal_speed = speed * cos(angle);
            vertical_speed = speed * sin(angle);

            land_point = horizontal_speed * ((vertical_speed + sqrt(pow(vertical_speed, 2) + 2 * gravity * height)) / gravity);

            if(land_point1 <= land_point && land_point <= land_point2){
                printf("%.5lf -> DUCK\n", land_point);
            }
            else{
                printf("%.5lf -> NUCK\n", land_point);
            }

        }
    }

    return 0;
}