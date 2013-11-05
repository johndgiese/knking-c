#include <iso646.h>
#include <stdio.h>


void problem(int chapter, int number) {
    printf("\nPROBLEM %2d.%-4d\n", chapter, number);
}


int main(int argc, const char *argv[]) {

    int a, b, c, d;
    float aa, bb, cc, dd;

    problem(3, 1);
    printf("%6d,%4d|\n", 86, 1040);
    printf("%12.5e|\n", 30.2530);
    printf("%.4f|\n", 83.162);
    printf("%-6.2g|\n", .0000009979);


    problem(3, 2);
    aa = 1234.5678;
    printf("%-8.1e|\n%10.6e|\n%-8.3f|\n%6.0f|\n", aa, aa, aa, aa);


    problem(3, 3);
    scanf("%d", &a); printf("%d\n", a);
    scanf(" %d", &a); printf("%d\n", a);

    scanf("%d-%d-%d", &a, &b, &c); printf("%d|%d|%d\n", a, b, c);
    scanf("%d -%d -%d", &a, &b, &c); printf("%d|%d|%d\n", a, b, c);
    // skip other items


    problem(3, 4);
    scanf("%d%f%d", &a, &bb, &c);
    printf("%d|%g|%d\n", a, bb, c);


    problem(3, 5);
    scanf("%f%d%f", &aa, &b, &bb);
    printf("%g|%d|%g", aa, b, bb);

    return 0;
}

