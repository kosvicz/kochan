#include <stdio.h>

int main() {
    int num, sign;

    printf("Please type in a number: ");
    scanf("%i", &num);

    if(num < 0)
        sign = -1;
    else if(num == 0)
        sign = 0;
    else
        sign = 1;

    printf("Sign = %i\n", sign);

    return 0;
}

