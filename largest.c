#include <stdio.h>

#define N 10

int *find_largest(int a[], int n);

int main(void){
    
    int i, a[N];

    printf("Enter 10 numbers: ");
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("Largest value is: %d\n", *find_largest(a, N));
}

int *find_largest(int a[], int n){
    int i, l, *largest;

    for (i = 0; i < n; i++){
        if ( a[i] > l )
            l = a[i];
    }
    largest  = &l;

    return largest;
}
