#include<stdio.h>

int main(){
    int num1, num2;
    printf("Enter number1:-");
    scanf("%d",&num1);

    printf("Enter number1:-");
    scanf("%d",&num2);

    if(num1<num2){
        printf("%d is smallest",num1);
    }else{
        printf("%d is smallest",num2);
    }

    return 0;   
}    