#include <stdio.h>
#include <stdint.h> 

void print();

void print(int b1, int b2){
    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", b1, b1, b2, b2, b1+b2, b1+b2);
}