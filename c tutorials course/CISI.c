#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    
    // Input principal amount, rate, and time
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    float simpleInterest = (principal * rate * time) / 100.0;

    // Calculate compound interest
    float compoundInterest = principal * (pow(1 + rate / 100.0, time)) - principal;

    // Display the results
    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
