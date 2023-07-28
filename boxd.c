#include <stdio.h>

/* weight = (volume+165)/166 */
/* dividing integers drops floating numbers... 
 * We would prefer to round up and not down, add 165 to the volume
 * i.e volume = 166 + 165 = 331
 * result would be 331/166 = 1 not 1.99999
 * 167+165 = 332 would return 2
 */

int main(void)
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165)/166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight: (pounds) %d\n", weight);

    return 0;
}


