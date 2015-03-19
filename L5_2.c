#include <stdio.h>

int main() {
    int n, tAngNum = 0;
    
    for (n = 1; n <= 200; ++n)
        tAngNum += n;
    
    printf("The 200th triangular number is %i\n", tAngNum);

    return 0;
}

