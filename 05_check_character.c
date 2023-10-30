#include<stdio.h>

int main(){
    char ch;
    printf("enter a character:-");
    scanf("%c",&ch);

    if(ch>='0' && ch<='9'){
        printf("given charcter is digit");
    }else{
        printf("given charcter is not digit");
    }
    return 0;
}