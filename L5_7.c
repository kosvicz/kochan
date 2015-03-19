#include <stdio.h>

int main() {
    int u, v, temp;

    printf(" Please type in two nonnegative integers.\n");
    printf("u: ");
    scanf("%i", &u);
    printf("v: ");
    scanf("%i", &v);
    
    while(v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("Their greatest common divisor is %i\n", u);

    return 0;
}

