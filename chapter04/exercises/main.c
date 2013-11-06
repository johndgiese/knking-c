#include <iso646.h>
#include <stdio.h>
#include <string.h>


#define PROBLEM(chapter, number) printf("\nPROBLEM %2d.%-4d\n", chapter, number)
#define PRINT_INT(exp) fputs(#exp " -> ", stdout); printf("%d\n", exp)


int main() {

    int i, j, k;

    PROBLEM(4, 1);
    i = 5; j = 3;
    printf("%d %d\n", i/j, i % j);
    i = 2; j = 3;
    printf("%d\n", (i + 10) % j);
    i = 7; j = 8; k = 9;
    printf("%d\n", (i + 10) % k / j);
    i = 1; j = 2; k = 3;
    printf("%d\n", (i + 5) % (j + 2) / k);


    PROBLEM(4, 3);
    PRINT_INT(8 / 5);
    PRINT_INT(-8 / 5);
    PRINT_INT(8 / -5);
    PRINT_INT(-8 / -5);


    PROBLEM(4, 10);
    i = 6;
    j = i += i;
    printf("%d %d\n", i, j); // 12 12
    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d\n", i, j); // 3 4
    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d\n", i, j); // 2 8
    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d\n", i, j); // 6 9


    PROBLEM(4, 11);
    i = 1;
    printf("%d ", i++ - 1); // 0
    printf("%d\n", i); // 2
    i = 10; j = 5;
    printf("%d ", i++ - ++j); // 4
    printf("%d %d\n", i, j); // 11 6
    i = 7; j = 8;
    printf("%d ", i++ - --j); // 0
    printf("%d %d\n", i, j); // 8 7
    i = 3; j = 4; k = 5;
    printf("%d ", i++ - j++ + --k); // 3
    printf("%d %d %d\n", i, j, k); // 4 5 4


    return 0;
}

