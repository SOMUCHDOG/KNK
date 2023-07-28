#include <stdio.h>

int main()
{
    float balance, rate, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &balance);
    
    printf("Enter the interest rate: ");    
    scanf("%f", &rate);

    printf("Enter amount of the monthly payment: ");
    scanf("%f", &payment);
    
    for (int i = 1; i <= 3; i++){
        balance = balance + ((balance * (rate/100.0f))/12.0f) - payment;
        printf("Balance After %d payment: %.2f\n", i, balance);       
    }

    return 0;
}
