#include <stdio.h>

int main() {
    float f1 = 123.125, f2;
    int i1, i2 = -150;

    i1 = f1; // Перетворення дійсного числа в ціле
    // printf("%f assigned to an integer produces %i\n", f1, i1);
    printf("%f перетворене в int дає %i\n", f1, i1);

    f1 = i2; // Перетворення цілого числа в дійсне
    printf("%i перетворене в float дає %f\n", i2, f1);

    f1 = i2 / 100; // Цілочисельне ділення
    printf("%i поділене на 100 дає %f\n", i2, f1);

    f2 = i2 / 100.0; // Ділення цілого числа на дійсне
    printf("%i поділене на 100.0 дає %f\n", i2, f2);

    f2 = (float) i2 / 100; // Оператор явного перетвонення типів
    printf("(float) %i поділене на 100 дає %f\n", i2, f2);

    return 0;
}

