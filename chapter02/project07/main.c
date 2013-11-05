#include <iso646.h>
#include <stdbool.h>

#include <stdio.h>

#include "util.h"

int main(void) {

    float a = prompt_for_amount();

    billbreakdown b = breakdown_amount(a);

    printf("\n");
    print_breakdown(b);

    return 0;
}
