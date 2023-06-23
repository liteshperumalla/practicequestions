#include <stdio.h>

void printBits(int num);

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Bits representation: ");
    printBits(num);

    return 0;
}

void printBits(int num) {
    int i;
    int mask = 1 << 31; 

    for (i = 0; i < 32; i++) {
        if (num & mask)
            printf("1");
        else
            printf("0");
        mask >>= 1;
    }

    printf("\n");
}
