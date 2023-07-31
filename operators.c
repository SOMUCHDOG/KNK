#include <stdio.h>

int main(void) {
    int i = 0;;

    printf("i += 1: %d\n", i+=1);
    i = 0;

    printf("i = ++i: %d\n", ++i);
    i = 0;

    printf("i = i++: %d\n", i++);
}
