#include <stdio.h>
#include <stdlib.h>

/* takes a number, and counts the number of trailing
 * zeros that would be in the factorial of this number
 */
int count_trailing_zeros(int number){
    int trailing_zeros = 0;
    /* get number of factors of 5 in the factorial, by checking
     * all the multiple of 5 */
    for (int i = 5, counter = 5; i <= number; i += 5, counter = i){
        /* while loop divides counter by 5 if it is a multiple of
         * 5, then increments the trailing zero counter as the
         * number of trailing zeros necessarily equals the number
         * of factors of 5 in the factorial
         * This will increment once on 5, 10, etc,
         * twice for 25, 50, etc,
         * three times for 125, 250,
         * four times for 625 (5^4), and so on */
        while(!(counter % 5)){
            counter /= 5; trailing_zeros++;
	}
    }
    return trailing_zeros;
}

int main(int argc, char *argv[]){
    int target = atoi(argv[1]);
    if (target <= 0){
        printf("Factorials must be of positive numbers\n");
        exit(-1);
    }
    int trailing_zeros = count_trailing_zeros(target);
    printf("%d! has %d trailing zeros\n", target, trailing_zeros);
}
