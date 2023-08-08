#include <stdio.h>


char *strcat(char *s1, const char *s2);
char *strcatshort(char *s1, const char *s2);

char *strcat(char *s1, const char *s2)
{
    char *p = s1;
    
    while (*p)
        p++;
    while (*s2){
        *p = *s2;
        p++;
        s2++;
    }
    *p = '\0';
    return s1;
}

char *strcatshort(char *s1, const char *s2)
{
    char *p = s1;
    
    while (*p)
        p++;
  
    while (*p++ = *s2++)
        ;

    return s1;
}

int main(void){
}
