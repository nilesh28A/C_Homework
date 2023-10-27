#include<stdio.h>

int main(){
    float sideA, sideB;
    printf("Enter siedA value:-");
    scanf("%f",&sideA);
    printf("Enter siedB value:-");
    scanf("%f",&sideB);

    printf("perimeter of rectangle is = %f",2*(sideA+sideB));
    return 0;
}