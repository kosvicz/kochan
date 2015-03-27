#include <stdio.h>

int main() {
    int num, r_dig;

    printf("Enter your number.\n");
    scanf("%i", &num);

    while(num != 0) {
        r_dig = num % 10;
        printf("%i", r_dig);
        num /= 10;
    }

    printf("\n");

    return 0;
}

