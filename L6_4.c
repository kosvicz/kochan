#include <stdio.h>

int main() {
    int numTest, remainder;

    printf("Enter your number to be tested: ");
    scanf("%i", &numTest);

    remainder = numTest % 2;

    if(remainder == 0)
        printf("The number is even\n");
    else
        printf("The number is odd\n");

    return 0;
}

