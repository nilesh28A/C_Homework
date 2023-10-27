#include<stdio.h>

int main(){
    
    // perimeter calculation
    float sideA, sideB;
    printf("Enter siedA value:-");
    scanf("%f",&sideA);
    printf("Enter siedB value:-");
    scanf("%f",&sideB);
    printf("perimeter of rectangle is = %f\n",2*(sideA+sideB));

    // CUBE calculation
    int num;
    printf("Enter number value:-");
    scanf("%d",&num);
    printf("cube of a number is = %d",num*num*num);
    return 0;
}
