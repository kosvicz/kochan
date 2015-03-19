#include <stdio.h>

int main() {
    int num;
    printf("Type in your number: ");
    scanf("%i", &num);

    if(num < 0)
        num = -num;

    printf("The absolute value is %i\n", num);

    return 0;
}

