#include <stdio.h>

int main() {
    int n, num, tAngNum;

    printf("What triangular number do you want? ");
    scanf("%i", &num);
    tAngNum = 0;
    for(n = 1; n <= num; ++n)
        tAngNum += n;
    printf("Triangular number %i is %i\n", num, tAngNum);

    return 0;
}

