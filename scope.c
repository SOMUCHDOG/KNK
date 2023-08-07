#include <stdio.h>

int i; // Declaration 1

void f(int i) // Declaration 2
{
    i = 1; // Modifies 2
}

void g(void)
{
    int i = 2; // Declaration 3

    if (i > 0) {
        int i; // Declaration 4

        i = 3; // Modifies 4
    }

    i = 4; // Modifies 3
}

void h(void)
{
    i = 5; // Modifies 1
}

int main(void)
{
    h();
    printf("i: %d\n", i);

    return 0;
}
