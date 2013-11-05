#include <iso646.h>
#include <stdbool.h>

#include <stdio.h>

#include "util.h"


int prompt_for_amount() {

    int amount;

    while (true) {
        printf("Enter a dollar amount: ");
        int status = scanf("%d", &amount);

        /* TODO: get input error checking working
        if (status != 1 or amount < 0) {
            printf("Values must be non-negative whole numbers.\n");
        } else {
            break;
        }
        */
    }

    return amount;
}


billbreakdown breakdown_amount(int amount) {
    billbreakdown b;

    b.twenties = amount/20;
    amount = amount - 20*b.twenties;

    b.tens = amount/10;
    amount = amount - 10*b.tens;

    b.fives = amount/5;
    amount = amount - 5*b.fives;

    b.ones = amount;
    
    return b;
}


void print_breakdown(billbreakdown b) {
    printf("$20 bills: %d\n", b.twenties);
    printf("$10 bills: %d\n", b.tens);
    printf(" $5 bills: %d\n", b.fives);
    printf(" $1 bills: %d\n", b.ones);
}
