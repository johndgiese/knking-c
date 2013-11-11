#include <iso646.h>
#include <stdio.h>
#include <string.h>


#define PROBLEM(chapter, number) printf("\nPROBLEM %2d.%-4d\n", chapter, number)
#define PRINT_INT(exp) fputs(#exp " -> ", stdout); printf("%d\n", exp)


int main() {

    int i, j, k;

    PROBLEM(5, 1);
    i = 2; j = 3;
    k = i*j == 6;
    printf("%d\n", k); // 1

    i = 5; j = 10; k = 1;
    printf("%d\n", k > i < j); // 1

    i = 3; j = 2; k = 1;
    printf("%d\n", i < j == j < k); // 1

    i = 3; j = 4; k = 5;
    printf("%d\n", i % j + i < k); // 0


    PROBLEM(5, 3);
    i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k);  // ((i < j) || ((++j) < k))
    printf("%d %d %d\n", i, j, k); // 1 3 4 5

    i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k); // 0 7 8 9

    i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k); // 1 8 8 9

    i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k); // 1 2 1 1

    PROBLEM(5, 4);
    #define LT_E_GT(num) -(num < 0) + (num > 0)
    PRINT_INT(LT_E_GT(-4));
    PRINT_INT(LT_E_GT(0));
    PRINT_INT(LT_E_GT(4));

    PROBLEM(5, 10);
    i = 1;
    switch (i % 3) {
        case 0: printf("zero\n");
        case 1: printf("one\n");
        case 2: printf("two\n");
    }

    PROBLEM(5, 11);

    int area_code = 229;
    char *major_city;

    just_before_switch:
    switch(area_code) {
        case 229:
            major_city = "Albany";
            break;
        case 404:
            major_city = "Atlanta";
            break;
        case 470:
            major_city = "Atlanta";
            break;
        default:
            major_city = "";
    }
    if ( strlen(major_city) == 0) {
        printf("Area code not recognized\n");
    } else {
        printf("%s\n", major_city);
    }

    // goto's are bad pratice--this is just for fun :)
    if (area_code == 229) {
        area_code = 404;
        goto just_before_switch;
    } else if (area_code == 404) {
        area_code = 10;
        goto just_before_switch;
    }



    return 0;
}

