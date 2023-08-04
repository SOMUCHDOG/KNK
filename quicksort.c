#include <stdio.h>

#define N 7

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void){
    int i;
    int a[N] = { 12, 3, 6, 18, 7, 15, 10 };

    printf("The array: ");
    for(i = 0; i < N; i++)
        printf("%3d ", a[i]);

    quicksort(a, 0, N-1);
    
    printf("In sorted order: ");
    for (i= 0; i < N; i++)
        printf("%3d ", a[i]);
    printf("\n");
    
    return 0;
}

void quicksort(int a[], int low, int high){
    int middle;

    if (low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle-1);
    quicksort(a, middle+1, high);
}

int split(int a[], int low, int high){
    int part_element = a[low];

    for(;;) {
        while (low < high && part_element <= a[high])
            high--;
        if (low >= high) break;
        a[low++] = a[high];

        while (low < high && a[low] <= part_element)
            low++;
        if (low >= high) break;
        a[high--] = a[low];
    }

    a[high] = part_element;
    return high;
}
