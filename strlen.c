#include <stdio.h>
#include <string.h>

size_t stringlen(const char *s);
int read_line(char str[], int n);

#define MAX_LENGTH 255

int main(void){
    char msg_str[MAX_LENGTH + 1];
    printf("Enter a string to determine it's length: ");
    read_line(msg_str, MAX_LENGTH);

    printf("The length of the string is: %zu\n", stringlen(msg_str));
}

size_t stringlen(const char *s){
    size_t n;

    for (n = 0; *s != '\0'; s++) // Iterates until the pointer is a null value.
        n++;
    return n;
}

/* Iterates through the char array and pushes the char at the index into str[],
 * breaks when it encounters a null value in the string. */
int read_line(char str[], int n){
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
