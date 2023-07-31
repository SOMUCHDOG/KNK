/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * This program calculates the proper check digit in a UPC barcode *
 * i.e. "0  51500 24128  ?*"                                       *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

int main(void){
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
        first_sum, second_sum, total;

    printf("Enter a UPC code (without spaces): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 9 - ((first_sum * 3) + second_sum -1) % 10;

    printf("Check digit: %d\n", total);

    return 0;
}
