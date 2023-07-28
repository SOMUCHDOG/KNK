#include <stdio.h>

int main(void){

    int x = 3;
    int y = 5;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    y = x;
    x = 7;
    
    int input;
    printf("What is the value of y?\n");
    scanf("%d", &input);

    if (&input == &y){
        printf("Correct!\n");
    }
    else{
        printf("Incorrect!\n");
    }

    return 0;
}

