#include <stdio.h>

int main() {
    int n, tAngNum;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n Sum from 1 to n\n");
    printf("--- --------------\n");
    tAngNum = 0;
    for (n = 1; n <= 10; ++n) {
        tAngNum += n;
        printf("%2i%11i\n", n, tAngNum);
    }

    return 0;
}

