#include <stdio.h>
#include <stdlib.h>
#include "factorial_zero_counter.h"

int main(int argc, char *argv[]){
    int target = atoi(argv[1]);
    if (target <= 0){
        printf("Factorials must be of positive numbers\n");
        exit(-1);
    }
    int trailing_zeros = count_trailing_zeros(target);
    printf("%d! has %d trailing zeros\n", target, trailing_zeros);
}
