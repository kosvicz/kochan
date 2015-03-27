#include <stdio.h>

int main(void) {
    char c='X';
    char s[] = "abcdefghijklmnopqrstuvwxyz";
    int i = 425;
    short int j = 17;
    unsigned int u = 0xf179U;
    long int l = 75000L;
    long long int L = 0x1234567812345678LL;
    float f = 12.978F;
    double d = -97.4583;
    char *cp = &c;
    int *ip = &i;
    int c1, c2;

    printf("Integers:\n");
    printf("| %%i: %i | %%o: %o | %%x:  %x |  %%u: %u |\n", i, i, i, i);
    printf("| %%x: %x | %%X: %X | %%#x: %#x | %%#X: %#X |\n", i, i, i, i);
    printf("| %%+i: %+i | %% i: % i | %%07i: %07i | %%.7i: %.7i |\n", i, i, i, i);
    printf("| %%i: %i | %%o: %o | %%x:  %x |  %%u: %u |\n", j, j, j, j);
    printf("| %%i: %i | %%o: %o | %%x:  %x |  %%u: %u |\n", u, u, u, u);
    printf("| %%li: %li | %%lo: %lo | %%lx:  %lx |  %%u: %lu |\n", l, l, l, l);
    printf("| %%lli: %lli | %%llo: %llo | %%llx:  %llx |  %%lu: %llu |\n", L, L, L, L);

    printf("\nFloats and Doubles:\n");
    printf("| %%f: %f | %%e: %e | %%g: %g |\n", f, f, f);
    printf("| %%.2f: %.2e | %%.2e: %.2e |\n", f, f);
    printf("| %%.0f: %.0e | %%.0e: %.0e |\n", f, f);
    printf("| %%7.2f: %.2e | %%7.2e: %.2e |\n", f, f);
    printf("| %%f: %f | %%e: %e | %%g: %g\n", d, d, d);
    printf("| %%.*f: %.*f |\n", 3, d);
    printf("| %%*.*f: %*.*f |\n", 8, 2, d);

    printf("\nCharacters:\n");
    printf("| %%c: %c |\n", c);
    printf("| %%3c%%3c: %3c%3c |\n", c, c);
    printf("| %%x: %x |\n", c);
    
    printf("\nStrings:\n");
    printf("| %%s: %s |\n", s);
    printf("| %%.5s: %.5s |\n", s);
    printf("| %%30s: %30s |\n", s);
    printf("| %%20.5: %20.5s |\n", s);
    printf("| %%-20.5: %-20.5s |\n", s);

    printf("\nPointers:\n");
    printf("| %%p: %p | %%p: %p |\n", ip, cp);
    printf("This%n is fun.%n\n", &c1, &c2);
    printf("| c1 = %i | c2 = %i |\n", c1 ,c2);

    return 0;
}

