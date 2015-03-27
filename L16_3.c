#include <stdio.h>

int main(void) {
    char inName[64], outName[64];
    FILE *in, *out;
    int c;

    printf("Введіть ім'я файлу для копіювання: ");
    scanf("%63s", inName);
    printf("Введіть ім'я вихідного файлу: ");
    scanf("%63s", outName);

    if((in = fopen(inName, "r")) == NULL) {
        printf("Неможливо відкрити %s для читання.\n", inName);
        return 1;
    }
    if((out = fopen(outName, "w")) == NULL) {
        printf("Неможливо відкрити %s для запису.\n", outName);
        return 2;
    }

    while((c = getc(in)) != EOF)
        putc(c, out);

    fclose(in);
    fclose(out);

    printf("Файл скопійовано...\n");

    return 0;
}

