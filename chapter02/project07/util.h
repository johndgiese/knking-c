#ifndef UTIL_H
#define UTIL_H

typedef struct {
    int ones;
    int fives;
    int tens;
    int twenties;
} billbreakdown;

int prompt_for_amount();

billbreakdown breakdown_amount(int amount);

void print_breakdown(billbreakdown b);

#endif // UTIL_H
