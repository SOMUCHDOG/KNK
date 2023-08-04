/* Computes the area of a triangle. */

#include <stdio.h>

double triangle_area(double base, double height);

int main(void){

   printf("The area of the triangle is: %2f", triangle_area(5.00,4.00));

   return 0;
}

double triangle_area(double base, double height){
    double product;

    product = base * height;
    return product / 2;
}
