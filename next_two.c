#include <stdlib.h>
#include <stdio.h>

int next_two(int a){
    int count = 0;
    while(a>>count){
        count++;
    }
    printf("1<<count: %d\n", 1<<count);
    printf("a<<1: %d\n\n", a<<1);
    return (a) ? ((a<<1) - (1<<count)) ? 1<<(count) : a : 0;
}

int main(void){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Next power of 2: %d\n", next_two(a));
}
