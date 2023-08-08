#include <stdio.h>

/*
int main(int argc, char *argv[])
{
    int i;

    for (i=1; i < argc; i++)
        printf("%s\n", argv[i]);
}
*/


int main(int argc, char *argv[])
{
    char **p;

    for (p = &argv[1]; *p; p++)
        printf("%s\n", *p);
}
