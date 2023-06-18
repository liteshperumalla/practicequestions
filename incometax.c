#include <stdio.h>

int main() {
    // declare variables
    double income, tax = 0;

    // take input
    printf("Enter the income: ");
    scanf("%lf", & income);

    // find the income tax
    if (income <= 250000) {
        tax = 0;
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = 12500 + (income - 500000) * 0.2;
    } else {
        tax = 112500 + (income - 1000000) * 0.3;
    }

    // display income tax 
    // upto 2 decimal places
    printf("Income tax: %0.2lf", tax);

    return 0;
}
