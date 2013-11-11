#include <iso646.h>
#include <stdio.h>
#include <string.h>


#define PROBLEM(chapter, number) printf("\nPROBLEM %2d.%-4d\n", chapter, number)
#define PRINT_INT(exp) fputs(#exp " -> ", stdout); printf("%d\n", exp)


int main() {

    int i, j, k;

    PROBLEM(7, 1);
    printf("a) %d\n", 077); // 7*8^1 + 7*8^0 = 56 + 7 = 63
    printf("b) %d\n", 0x77); // 7*16^1 + 7*16^0 = 112 + 7 = 119
    printf("c) %d\n", 0XABC); // 10*16^2 + 11*16^1 + 12*16^0 = 2560 + 176 + 12 = 2748


    PROBLEM(7, 2);
    printf("a) %e\n", 010E2);
    printf("b) %e\n", 32.1E+5);
    printf("c) invalid\n"); // hex literals can't contain a '9' digit
    printf("d) invalid\n"); // whats up with the underscore?
    printf("e) %e\n", 3.97e-2);

    printf("bool: %zu\n", sizeof(_Bool));
    printf("char: %zu\n", sizeof(char));
    printf("short: %zu\n", sizeof(short));
    printf("int: %zu\n", sizeof(int));
    printf("long int: %zu\n", sizeof(long int));
    printf("long long int: %zu\n", sizeof(long long int));
    printf("\n");
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("long double: %zu\n", sizeof(long double));
    printf("\n");
    printf("complex float: %zu\n", sizeof(_Complex float));
    printf("complex double: %zu\n", sizeof(_Complex double));
    printf("complex long double: %zu\n", sizeof(_Complex long double));

    return 0;
}

