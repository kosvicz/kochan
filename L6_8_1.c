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
        if(val2 == 0)
            printf("Division by zero.\n");
        else
            printf("%.2f\n", val1/val2);
    else
        printf("Unknown operator.\n");

    return 0;
}

