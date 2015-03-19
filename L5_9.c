#include <stdio.h>

int main() {
    int num, r_dig;

    printf("Enter your number.\n");
    scanf("%i", &num);
    
    do {
        r_dig = num % 10;
        printf("%i", r_dig);
        num /= 10;
    }
    while(num != 0);
    printf("\n");

    return 0;
}

