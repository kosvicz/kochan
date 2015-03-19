#include <stdio.h>

int main() {
    int n, num, tAngNum, count;

    for(count = 1; count <= 5; ++count) {
        printf("What triangular number do you want? ");
        scanf("%i", &num);
        tAngNum = 0;
        for(n = 1; n <= num; ++n)
            tAngNum += n;
        printf("Triangular number %i is %i\n\n", num, tAngNum);
    }

    return 0;
}

