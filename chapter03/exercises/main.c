#include <iso646.h>
#include <stdio.h>

#include "util.h"

void problem(int chapter, int number) {
    printf("\nPROBLEM %2d.%-4d\n", chapter, number);
}


int main(int argc, const char *argv[]) {
    problem(3, 1);
    printf("%6d,%4d|\n", 86, 1040);
    printf("%12.5e|\n", 30.2530);
    printf("%.4f|\n", 83.162);
    printf("%-6.2g|\n", .0000009979);

    problem(3, 2);
    float num = 1234.56789;
    printf("%-8.1e|\n%10.6e|\n%-8.3f|\n%6.0f|\n", num, num, num, num);
    return 0;
}
