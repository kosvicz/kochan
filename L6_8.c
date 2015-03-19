#include <stdio.h>

int main() {
    float val1, val2;
    char oper;

    printf("Type in your expression.\n");
    scanf("%f %c %f", &val1, &oper, &val2);

    if(oper == '+')
        printf("%.2f\n", val1+val2);
    else if(oper == '-')
        printf("%.2f\n", val1-val2);
    else if(oper == '*')
        printf("%.2f\n", val1*val2);
    else if(oper == '/')
        printf("%.2f\n", val1/val2);

    return 0;
}

