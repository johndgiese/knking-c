#include <iso646.h>
#include <stdio.h>
#include <string.h>


#define STRINGIZE(s) #s
#define PRINT_MACRO(s) puts(#s " --> " STRINGIZE(s))

// print a macro before preprocessing, after preprocessing, and its result
// Calling fputs is necessary so that any % characters in the macro aren't
// interpretted as format specifiers for printf.
#define PRINT_INT_MACRO(n) fputs(#n " = " STRINGIZE(n), stdout); printf(" = %d\n", n)

#define PROBLEM(chapter, number) printf("\nPROBLEM %2d.%-4d\n", chapter, number)


// for problem 14.7
#define GENERIC_MAX(type) \
    type type##_max(type x, type y) { return x > y ? x : y; }

GENERIC_MAX(int)

#define ul unsigned long
GENERIC_MAX(ul)


int main(int argc, const char *argv[]) {

    PROBLEM(14, 1);

    #define cube(x) ((x)*(x)*(x))
    #define cube_bad(x) (x*x*x)
    PRINT_INT_MACRO(cube(4));
    PRINT_INT_MACRO(cube(4 + 1));
    PRINT_INT_MACRO(cube_bad(4));
    PRINT_INT_MACRO(cube_bad(4 + 1));

    #define mod4(x) ((x) % 4)
    PRINT_INT_MACRO(mod4(2));

    #define lt100(x, y) (((x)*(y)) < 100)
    PRINT_INT_MACRO(lt100(10, 9));
    PRINT_INT_MACRO(lt100(100, 1));


    PROBLEM(14, 2);

    int a10[10];
    double a20[20];

    #define NELEMS(a) ((int) (sizeof(a)/sizeof((a)[0])))
    PRINT_INT_MACRO(NELEMS(a10));
    PRINT_INT_MACRO(NELEMS(a20));


    PROBLEM(14, 3);

    #define DOUBLE(x) 2*x
    PRINT_INT_MACRO(DOUBLE(1 + 2));
    PRINT_INT_MACRO(4/DOUBLE(2));
    #define DOUBLE_FIXED(x) (2*(x))
    PRINT_INT_MACRO(DOUBLE_FIXED(1 + 2));
    PRINT_INT_MACRO(4/DOUBLE_FIXED(2));


    PROBLEM(14, 5);

    int i;
    char s[10];

    #define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
    strcpy(s, "abcd");
    i = 0;
    putchar(TOUPPER(s[++i]));
    putchar('\n');

    // hint: && takes a shortcut when it can
    strcpy(s, "0123");
    i = 0;
    putchar(TOUPPER(s[++i]));
    putchar('\n');


    PROBLEM(14, 7);
    // see top of file for declarations

    PRINT_MACRO(GENERIC_MAX(int));
    PRINT_MACRO(GENERIC_MAX(ul));

    printf("%d\n", int_max(5, 6));
    printf("%lu\n", ul_max(5ul, 6ul));


    PROBLEM(14, 8);

    #define LITERAL(s) #s
    #define LITERAL2(s) LITERAL(s)
    #define LINE_FILE "Line " LITERAL2(__LINE__) " of file " __FILE__
    PRINT_MACRO(LINE_FILE);
    const char *str = LINE_FILE;
    puts(str);

    return 0;
}

