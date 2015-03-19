#include <stdio.h>

int main() {
    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;

    result = a - b; // Віднімання
    printf("a - b = %i\n", result);

    result = b * c; // Множення
    printf("b * c = %i\n", result);

    result = a / c; // Ділення
    printf("a / c = %i\n", result);

    result = a + b * c; // Старшинство
    printf("a + b * c = %i\n", result);

    result = (a + b) * c;
    printf("(a + b) * c = %i\n", result);

    printf("a * b + c * d = %i\n", a * b + c * d);

    return 0;
}

