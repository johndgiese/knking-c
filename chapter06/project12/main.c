#include <iso646.h>

#include <stdio.h>
#include <string.h>
#include <float.h>
#include <tgmath.h>

int main(int argc, const char *argv[]) {

    float x;
    int read_success;

    if (argc == 1) {
        x = 1.0f;
    } 
    if (argc == 2) {
        read_success = sscanf(argv[1], "%f", &x);
    }

    if (argc > 2 or (argc == 2 and not read_success)) {
        printf("Usage: exp [number]\n");
        return -1;
    }


    float e_to_the_x = 0.0f;

    float next_term = 1.0f;
    float running_power = 1.0f;
    float running_factorial = 1.0f;
    int num_terms = 0;

    printf("exp(x) =\n");
    while (next_term >= FLT_EPSILON) {

        printf("%30.10f + \n", next_term);
        e_to_the_x += next_term;

        num_terms += 1;
        running_factorial *= num_terms;
        running_power *= x;
        next_term = running_power/running_factorial;
    }
    char *ellipsis = "...";
    printf("%30s\n", ellipsis);
    printf("       =\n");
    printf("%30.10f\n", e_to_the_x);
    printf("       =\n");
    printf("%30.10e\n", e_to_the_x);

    return 0;
}
