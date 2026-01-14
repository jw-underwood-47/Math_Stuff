#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int target = atoi(argv[1]);
    if (target <= 0){
        printf("Factorials must be of positive numbers\n");
        exit(-1);
    }
    int trailing_zeros = 0;
    for (int i = 5, counter = 5; i <= target; i += 5, counter = i){
        while(!(counter % 5)){
            counter /= 5; trailing_zeros++;
	}
    }
    printf("%d! has %d trailing zeros\n", target, trailing_zeros);
}
