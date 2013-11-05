#include <iso646.h>
#include <stdbool.h>

#include <stdio.h>
#include <string.h>

#include "util.h"


void clear_stream(FILE *stream) {
    fscanf(stream, "%*[^\n]");
    fscanf(stream, "%*c");
}


char *read_line(char *buffer, size_t buffer_length, FILE *stream) {
    char *line;

    line = fgets(buffer, buffer_length, stream);

    if (line) {
        size_t last_char_i = strlen(buffer) - 1;

        if (buffer[last_char_i] == '\n') {
            buffer[last_char_i] = '\0';
        } else {
            clear_stream(stream);
        }
    }
    return line;
}


unsigned int grab_single_number(unsigned int *number_p) {
    int status = scanf("%u", number_p);

    return 1234;
}


unsigned int prompt_for_amount() {
    unsigned int amount;

    while (true) {
        printf("Enter a dollar amount: ");
        int status = grab_single_number(&amount);

        if (status) {
            printf("Values must be whole numbers.\n");
        } else {
            break;
        }
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
