#include <stdio.h>
#include <stdlib.h>

int factor_count(int num){
    int factors = 0;
    for (int i = 1; i <= num/2+1; i++){
        if (num%i==0) factors++;
    }
    return factors+1; // num is always own factor
}

int main(int argc, char*argv[]){
    int temp = 0;
    int count_even = 0;
    int count_odd = 0;
    if (argc <= 1){
        printf("Error: not enough arguments\n");
        exit(-1);
    }
    else if (argc == 2){
        temp = factor_count(atoi(argv[1]));
        printf("%d factors\n", temp);
        /* curiously, if ", temp" is removed the output printed
         * is atoi(argv[1]), at least on my system */
        exit(0);
    }
    for (int i = atoi(argv[1]); i <= atoi(argv[2]); i++){
        temp = factor_count(i);
        printf("%d: %d factors\n", i, temp);
        if (temp%2) count_odd++;
        else count_even++;
    }
    printf("%d even factors, %d odd factors\n", count_even, count_odd);
}

